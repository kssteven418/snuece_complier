%{
/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#include "subc.tab.h"

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);


%}

/* yylval types */
%union {
	int		intVal;
	char	charVal;
	char	*stringVal;
	id		*idptr;

	decl	*declptr;
}

/* Precedences and Associativities */
%left	','
%right	'='	
%left 	LOGICAL_OR
%left 	LOGICAL_AND
%left 	'&'
%left 	EQUOP
%left 	RELOP
%left 	'+' '-'
%left 	'*' 
%right 	'!' INCOP DECOP
%left 	'[' ']' '(' ')' '.' STRUCTOP

%nonassoc IFONLY
%nonassoc ELSE

/* Token and Types */

%type<intVal> pointers
%type<declptr> type_specifier
%type<declptr> const_expr expr or_expr or_list and_expr and_list
%type<declptr> binary unary

%token<idptr> ID
%token<idptr> TYPE VOID STRUCT 
%token<idptr> RETURN IF ELSE WHILE FOR BREAK CONTINUE 
%token<stringVal> LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP 
%token<stringVal> STRING 
%token<charVal> CHAR_CONST 
%token<intVal> INTEGER_CONST

%%
    
program
		: ext_def_list
;

ext_def_list
		: ext_def_list ext_def
		| /* empty */
;

ext_def
		: type_specifier pointers ID ';'
		| type_specifier pointers ID '[' const_expr ']' ';'
		| func_decl ';'
		| type_specifier ';'
		| func_decl compound_stmt
; 

type_specifier
		: TYPE{
			ste* typeste = find($1);
			// printf("TYPE %s\n", typeste->name->name);
			$$ = typeste->decl;
		}
		| VOID{
			ste* typeste = find($1);
			// printf("VOID %s\n", typeste->name->name);
			$$ = typeste->decl;
		}
		| struct_specifier
;

struct_specifier
		: STRUCT ID '{' def_list '}'
		| STRUCT ID
;

func_decl
		: type_specifier pointers ID '(' ')'
		| type_specifier pointers ID '(' VOID ')'
		| type_specifier pointers ID '(' param_list ')'
;

pointers
		: '*'{
			$$ = 1; // true
		}
		| /* empty */ {
			$$ = 0; // false
		}
;

param_list  /* list of formal parameter declaration */
		: param_decl
		| param_list ',' param_decl
;

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID
		| type_specifier pointers ID '[' const_expr ']'
;

def_list    /* list of definitions, definition can be type(struct), variable, function */
		: def_list def
		| /* empty */
;

def
		: type_specifier pointers ID ';'{
			int is_ptr = $2; // 0 if not pointer, 1 if pointer
			
			// if redeclared
			if(check_is_declared($3)){
				raise("redeclared");
			}
			else{
				if(is_ptr){
					decl* temp = makeptrdecl($1);
					declare($3, temp);
				}
				else{
					decl* temp = makevardecl($1);
					declare($3, temp);
				}
			}
					
		}

		| type_specifier pointers ID '[' const_expr ']' ';'{
			int is_ptr = $2;

			// if redeclared
			if(check_is_declared($3)){
				raise("redeclared");
			}
			else{
				decl* var_decl = NULL;
				if(is_ptr){
					var_decl = makeptrdecl($1);
				}
				else{
					var_decl = makevardecl($1);
				}
				decl* temp = makearraydecl($5->int_value, var_decl);
				declare($3, temp);
			}
			
		}
		| type_specifier ';'
		| func_decl ';'
;

compound_stmt
		: '{' local_defs stmt_list '}'
;

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list
;

stmt_list
		: stmt_list stmt
		| /* empty */
;

stmt
		: expr ';'
		| compound_stmt
		| RETURN ';'
		| RETURN expr ';'
		| ';'
		| IF '(' expr ')' stmt
		| IF '(' expr ')' stmt ELSE stmt
		| WHILE '(' expr ')' stmt
		| FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt
		| BREAK ';'
		| CONTINUE ';'
;

expr_e
		: expr
		| /* empty */
;

const_expr
		: expr
;

expr
		: unary '=' expr
		| or_expr
;

or_expr
		: or_list
;

or_list
		: or_list LOGICAL_OR and_expr
		| and_expr
;

and_expr
		: and_list
;

and_list
		: and_list LOGICAL_AND binary
		| binary
;

binary
		: binary RELOP binary{
			
		}
		| binary EQUOP binary{
			
		}
		| binary '+' binary{
			if(check_add_sub($1, $3, $$)){
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					$$->int_value = $1->int_value + $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
			}
		}
		| binary '-' binary{
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of subtraction of two integer constants
					$$->int_value = $1->int_value + $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
			
		}
		| unary %prec '='{
			$$ = $1;
		}

unary
		: '(' expr ')'{
			$$ = $2;
		}
		| '(' unary ')'{
			$$ = $2;
		}

		| INTEGER_CONST{
			ste* temp = find(lookup("int")); 
			// construct a new constant declaration
			decl* const_decl = makeconstdecl(temp->decl);
			const_decl->int_value = $1;
			$$ = const_decl;
		}

		| CHAR_CONST{
			ste* temp = find(lookup("char"));
			// construct a new constant declaration
			decl* const_decl = makeconstdecl(temp->decl);
			const_decl->char_value = $1;
			$$ = const_decl;
		}

		| STRING{
			//TODO
		}

		| ID{
			id* name = $1;	
			ste* id_ste = find_current_scope(name);
			if(id_ste==NULL){
				//use without definition
				$$ = raise("not declared");
			}
			else{
				// copy declaration : not in the symbol table
				$$ = copy(id_ste->decl);
			}
		
		}

		| '-' unary	%prec '!'{
			if($2 == NULL) $$ = NULL;
			
			// unary is not INT type
			else if(!check_type_compat($2->type, inttype)){
				$$ = raise("not int type");
			}

			// unary must be a const or a variable 
			else if(!check_is_const_var($2)){
				$$ = raise("not const or variable");
			}
			
			else{
				$$ = $2;
				if(check_is_const($$)){
					// in case unary is a constant, value must be computed
					$$->int_value = -($$->int_value);
				}
				else{
					$$->declclass = _EXP; // integer expression
				}
			}
		}

		| '!' unary{
			if($2 == NULL) $$ = NULL;
			
			// unary must be a INT type
			else if(!check_type_compat($2->type, inttype)){
				$$ = raise("not int type");
			}
			
			// unary must be a const or a variable 
			else if (!check_is_const_var($2)){
				$$ = raise("not const or variable");
			}
			
			else{
				$$ = $2;
				if(check_is_const($$)){
					// in case unary is a constant, value must be computed
					$$->int_value = !($$->int_value);
				}
				else{
					$$->declclass = _EXP; // integer expression
				}
			}
		}

		| unary INCOP{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($1, $$)){
				$$ = $1;
				$$->declclass = _EXP; // integer/char expression
			}
		}

		| unary DECOP{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($1, $$)){
				$$ = $1;
				$$->declclass = _EXP; // integer/char expression
			}
		}
		| INCOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
				$$->declclass = _EXP; // integer/char expression
			}
		}

		| DECOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
				$$->declclass = _EXP; // integer/char expression
			}
		}
		| '&' unary	%prec '!'
		| '*' unary	%prec '!'
		| unary '[' expr ']'
		| unary '.' ID
		| unary STRUCTOP ID 
		| unary '(' args ')'
		| unary '(' ')'
;

args    /* actual parameters(function arguments) transferred to function */
		: expr
		| args ',' expr
;


%%

/*  Additional C Codes here */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}


// check functions

int check_is_declared(id* name){
	if(name==NULL) return 0;
	ste* temp = find_current_scope(name);
	if (temp==NULL) return 0;
	else return 1;
}

int check_type_compat(decl* x, decl* y){
	if(x==NULL) return 0;
	if(y==NULL) return 0;
	return x==y;
}

int check_is_var(decl* x){
	if(x==NULL) return 0;
	return (x->declclass==_VAR);
}

int check_is_const(decl* x){
	if(x==NULL) return 0;
	return (x->declclass==_CONST);
}

int check_is_const_var(decl* x){
	if(x==NULL) return 0;
	return (x->declclass==_VAR) || (x->declclass==_CONST);
}

int check_is_pointer(decl* x){
	if(x==NULL) return 0;
	decl* type = x->type;
	if(type==NULL) return 0;
	return type->typeclass==_POINTER;
}


// for INCOP and DECOP
int check_inc_dec(decl* src, decl* dest){
	if(src==NULL){
			dest = NULL;
			return 0;
	}
	// unary must be a INT or a CHAR
	else if (!check_type_compat(src->type, inttype)
					&& !check_type_compat(src->type, chartype)){
		dest = raise("not int or char type");
		return 0;
	}
	
	// unary must be a variable
	else if(!check_is_var(src)){
		dest = raise("not variable");
		return 0;
	}
	return 1;
}

// for binary add/sub operations
int check_add_sub(decl* x, decl* y, decl* dest){
	if(x==NULL){
			dest = NULL;
			return 0;
	}
	if(y==NULL){
			dest = NULL;
			return 0;
	}

	// operands(x, y) should be INT
	if(!check_type_compat(x->type, inttype)){
		dest = raise("not int type");
		return 0;
	}
	if(!check_type_compat(y->type, inttype)){
		dest = raise("not int type");
		return 0;
	}

	// operands should be computable : should have same types
	if(!check_type_compat(x->type, y->type)){
		dest = raise("not computable");
		return 0;
	}
	return 1;
}

int check_rel_equ(decl* x, decl* y, decl* dest){
	if(x==NULL){
			dest = NULL;
			return 0;
	}
	if(y==NULL){
			dest = NULL;
			return 0;
	}
	// operands(x, y) should be INT, CHAR, or POINTER
	if(!check_type_compat(x->type, inttype) 
					&& !check_type_compat(x->type, chartype)
					&& !check_is_pointer(x)){
		dest = raise("not int or char type");
		return 0;
	}
	if(!check_type_compat(y->type, inttype) 
					&& !check_type_compat(y->type, chartype)
					&& check_is_pointer(y)){
		dest = raise("not int or char type");
		return 0;
	}

	// operands should be computable : should have same types
	if(!check_type_compat(x->type, y->type)){
		dest = raise("not computable");
		return 0;
	}

	return 1;
}
