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
%type<declptr> def def_list ext_def ext_def_list
%type<declptr> type_specifier struct_specifier
%type<declptr> const_expr expr or_expr or_list and_expr and_list
%type<declptr> binary unary

%token<idptr> ID
%token<idptr> TYPE VOID STRUCT 
%token<idptr> RETURN IF ELSE WHILE FOR BREAK CONTINUE 
%token<stringVal> LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP 
%token<stringVal> STRING 
%token<charVal> CHAR_CONST 
%token<intVal> INTEGER_CONST
%token<intVal> RELOP EQUOP

%%
    
program
		: ext_def_list
;

ext_def_list
		: ext_def_list ext_def
		| /* empty */
;

ext_def
		: type_specifier pointers ID ';'{
			$$ = define_normal($1, $2, $3);
		}
		| type_specifier pointers ID '[' const_expr ']' ';'{
			$$ = define_array($1, $2, $3, $5);
		}
		| func_decl ';'
		| type_specifier ';'
		| func_decl compound_stmt
; 

/* returns decl entry of TYPE declaration */
/* assert $$->declclass == _TYPE */
type_specifier
		: TYPE{
			// only int and char
			ste* typeste = find($1);
			$$ = typeste->decl;
		}
		| VOID{
			ste* typeste = find($1);
			$$ = typeste->decl;
		}
		| struct_specifier{
			$$ = $1;
		}
;

struct_specifier
		/* when first declared */
		: STRUCT ID '{' {
			push_scope(); 
		}
			def_list '}' {
				ste* fields = pop_scope();
				if ($$ == NULL) { $$ = NULL; }
					
				// check if the struct type(ID) is declared
				// must search in every scope
				else if(check_is_declared($2, 0)){
					$$ = raise("redeclared");
				}
				else{
					$$ = makestructdecl(fields);
					declare_struct_type($2, $$);
				}
				printf("@%s\n", $2->name);
				debugst(sstop->top);
				debugst(fields);
		}
		/* access the already declared struct type */
		| STRUCT ID {
			if ($$ = NULL) { $$ = NULL;}
			else{
				printf("struct2\n");
				// find struct type
				ste* id_ste = find($2);

				// struct must have been declared
				if(id_ste == NULL){
					$$ = raise("not declared");
				}

				// type should be a struct type TODO : is this right error message?
				else if(check_is_struct(id_ste->decl)){
					$$ = raise("not struct type");
				}
			}
		}
		
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
			$$ = define_normal($1, $2, $3);
		}


		| type_specifier pointers ID '[' const_expr ']' ';'{
			$$ = define_array($1, $2, $3, $5);
		}
		| type_specifier ';'
		| func_decl ';'
;

compound_stmt
		: '{' { push_scope(); }local_defs stmt_list '}'{pop_scope();}
;

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list /* TODO : check no struct decl */
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
		: expr{
			//should be a constant
			if(check_is_const($1)){
				$$ = $1;
			}
			else{
				$$ = raise("not constant");
			}
		}
;

expr
		: unary '=' expr{
				//TODO
		}
		| or_expr{
				$$ = $1;
		}
;

or_expr
		: or_list{
			$$ = $1;
		}
;

or_list
		: or_list LOGICAL_OR and_expr{
			if(check_and_or($1, $3, $$)){
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					$$->int_value = $1->int_value || $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
			}
		}
		| and_expr{
			$$ = $1;
		}
;

and_expr
		: and_list{
			$$ = $1;	
		}
;

and_list
		: and_list LOGICAL_AND binary{
			if(check_and_or($1, $3, $$)){
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					$$->int_value = $1->int_value && $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
			}
		}
		| binary{
			$$ = $1;
		}
;

binary
		: binary RELOP binary{
			if(check_rel_equ($1, $3, $$, 0)){
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					// in case of addition of two integer constants
					if($2==_LT)	$$->int_value = $1->int_value < $3->int_value;
					if($2==_LTE)	$$->int_value = $1->int_value <= $3->int_value;
					if($2==_GT)	$$->int_value = $1->int_value > $3->int_value;
					if($2==_GTE)	$$->int_value = $1->int_value >= $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
				
			}
		}
		| binary EQUOP binary{
			if(check_rel_equ($1, $3, $$, 1)){
				$$ = copy($1);
				if(check_is_const($1) && check_is_const($3)){
					// in case of addition of two integer constants
					if($2==_EQ)	$$->int_value = $1->int_value == $3->int_value;
					if($2==_NE)	$$->int_value = $1->int_value != $3->int_value;
				}
				else{
					$$->declclass = _EXP;
				}
				
			}
			
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
			if(check_add_sub($1, $3, $$)){
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
			// find in all scopes
			ste* id_ste = find(name); 
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
			else if(!check_is_const_var($2, 1)){
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
			else if (!check_is_const_var($2, 1)){
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

		| '&' unary	%prec '!'{
			/* returns pointer of a value */
			if($2==NULL){
				$$ = NULL;
			}

			// unary must be a pure variable
			else if(!check_is_var($2, 0)){
				$$ = raise("not variable");
			}
			else{
				// $2 : VAR	
				decl* temp = makeptrdecl($2->type); // type is either int or char		
				$$ = temp;
				$$->declclass = _EXP;
			}
		}

		| '*' unary	%prec '!'{
			/* returns pointer of a value */
			if($2==NULL){
				$$ = NULL;
			}

			// unary must be a pointer
			else if(!check_is_pointer($2)){
				$$ = raise("not a pointer");
			}
			else{
				// access the value in the pointer
				decl* temp = makevardecl($2->type->ptrto);		
				$$ = temp;
				$$->declclass = _EXP;
			}
		}

		| unary '[' expr ']'{
			if($1 == NULL){
				$$ = NULL;
			}
			else if($3 == NULL){
				$$ = NULL;
			}

			else if(!check_is_array($1)){
				$$ = raise("not array type"); // TODO : error msg?
			}
			else if(!check_type_compat($3->type, inttype)){
				$$ = raise("not int type");
			}
			else{
				decl* temp = copy($1->type->elementvar);
				$$ = temp;
				$$->declclass = _VAR;
			}
		}
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

// definition of normal expressions
// (int x, int *x, struct temp x, struct temp *x)
// push entry into the symbol table and return its 
decl* define_normal(decl* type_decl, int is_ptr, id* id_decl){
	//type undefined
	if(type_decl==NULL) return NULL; 

	//id parsing error
	if(id_decl==NULL) return NULL;
	
	// id_decl : variable name

	// ID must not be declared in the current scope
	if (check_is_declared(id_decl, 1)){
		return raise("redeclared");	
	}

	decl* temp;
	
	if(is_ptr) temp = makeptrdecl(type_decl);
	else temp = makevardecl(type_decl);

	declare(id_decl, temp);
	return temp;

}

// definition of array expressions
// (int x[1], int *x[1], struct temp x[1], struct temp *x[1])
decl* define_array(decl* type_decl, int is_ptr, id* id_decl, decl* const_expr){

	//type undefined
	if(type_decl==NULL) return NULL; 

	//id parsing error
	if(id_decl==NULL) return NULL;
	
	//error in constant definition
	if(const_expr==NULL) return NULL;

	//index must be an integer
	//ASSERTED : const_expr is a constant
	if(!check_type_compat(const_expr->type, inttype)){
		return raise("not int type"); // could have been a constant array!
	}

	// ID must not be declared in the current scope
	if (check_is_declared(id_decl, 1)){
		return raise("redeclared");	
	}

	decl* var_decl;
	
	if(is_ptr) var_decl = makeptrdecl(type_decl);
	else var_decl = makevardecl(type_decl);

	decl* temp = makearraydecl(const_expr->int_value, var_decl);

	declare(id_decl, temp);
	
	return temp;

		return NULL;
}
