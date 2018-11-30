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
%type<declptr> def def_list ext_def ext_def_list local_defs
%type<declptr> func_decl param_decl param_list
%type<declptr> type_specifier struct_specifier
%type<declptr> const_expr expr or_expr or_list and_expr and_list args
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
/*Question : 
 1. function in struct??
 2. struct x; ?? 
 */    

program
		: ext_def_list
;

ext_def_list
		: ext_def_list ext_def{
		}
		
		| /* empty */{
			$$ = NULL;
		}
;

ext_def
		: type_specifier pointers ID ';'{
			$$ = define_normal($1, $2, $3);
		}

		| type_specifier pointers ID '[' const_expr ']' ';'{
			$$ = define_array($1, $2, $3, $5);
		}

		| func_decl ';'{
			$$ = check_function($1);
			pop_scope();			
		}

		| type_specifier ';'{
			$$ = $1;
		}

		| func_decl {
				ftn_type_glob = ftn_type;
			} compound_stmt {
			$$ = check_function($1);
			pop_scope();
		}
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
			// check if the struct type(ID) is declared
			// must search in every scope
			if(check_is_declared($2, 0)){
				// id should not be 'NULL'
				if(strCompare_no_len($2->name, "NULL")){
					$<declptr>$ = raise("unqualified id");
				}
				else{
					$<declptr>$ = raise("redeclared");
				}
			}
		}
			def_list '}' {
				ste* fields = pop_scope();
				if ($2 == NULL) { $$ = NULL; }
				
				else if(check_is_declared($2, 0)){
						$$ = NULL;
				}
				else if(strCompare_no_len($2->name, "NULL")){
					$$ = NULL;
				}
				
				// id should not be 'NULL'
				else if(strCompare_no_len($2->name, "NULL")){
					$$ = raise("unqualified id");
				}

				else{
					$$ = makestructdecl(fields);
					declare_struct_type($2, $$);
				}
		}

		/* access the already declared struct type */
		| STRUCT ID {
			if ($2 == NULL) { $$ = NULL;}
			// id should not be 'NULL'
			if(strCompare_no_len($2->name, "NULL")){
				$$ = raise("unqualified id");
			}
			
			else{
				// find struct type
				ste* id_ste = find($2);

				// struct must have been declared
				if(id_ste == NULL){
					$$ = raise("incomplete type error");
				}
				// type should be a struct type 
				else if(!check_is_struct_type(id_ste->decl)){
					$$ = raise("undeclared");
				}
				else{
					$$ = id_ste->decl;
				}
			}
		}	
;

func_decl
		: type_specifier pointers ID '(' ')'
		{
			ftn_type = $1;
			$$ = define_function_no_param($1, $2, $3);
		}
		| type_specifier pointers ID '(' VOID ')'
		{
			ftn_type = $1;
			$$ = define_function_no_param($1, $2, $3);
		}
		| type_specifier pointers ID '('
		{
				ftn_type = $1;
				if ($1 == NULL) { push_scope(); $<declptr>$ = NULL;}
				else if ($3 == NULL) { push_scope(); $<declptr>$ = NULL;}
				
				// id should not be 'NULL'
				else if(strCompare_no_len($3->name, "NULL")){
					push_scope();
					$<declptr>$ = raise("unqualified id");
				}

				// function name must have not defined before
				else if (check_is_declared($3, 1)){
					push_scope();
					$<declptr>$ = raise("redeclared");
				}

				else{
					decl *func = makeprocdecl();
					// function id is inserted into the stack
					// before the fack stack scope is constructed
					declare($3, func);
					//fake scope
					push_scope();
					// return type that returnid ste points to
					decl *returntype;
					// if pointer, encapsule type_specifier into ptr type decl
					if($2){
						returntype = (decl*)malloc(sizeof(decl));
						returntype->declclass = _TYPE;
						returntype->typeclass = _POINTER;
						returntype->ptrto = $1;
					}
					else{
						returntype = $1;
					}
					
					// push returnid at the fake stack
					declare(returnid, returntype);
					$<declptr>$ = func;
				}
			}
			 param_list ')'
			{
				decl* func = $<declptr>5;
				if(func==NULL){ 
						pop_scope(); // must pop unnecessary declarations
						$$ = NULL; 
						push_scope(); // scope for unnecessary func body 
				}
				else{
					// pop out the fake scope
					ste* formals = pop_scope();
					//debugst(formals);
					// set returntype and formals information of the function
					setprocdecl(func, formals); 
					// new scope for local declarations and formals
					push_scope();
					// enter all the formal variables into the stack
					push_stelist(formals);
					$$ = func;
				}
			}
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
		: param_decl{
			$$ = $1;
		}
		| param_list ',' param_decl{
		}
;

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID{
			$$ = define_normal($1, $2, $3);
		}
		| type_specifier pointers ID '[' const_expr ']'{
			$$ = define_array($1, $2, $3, $5);
		}
;

def_list    /* list of definitions, definition can be type(struct), variable, function */
		: def_list def{
		}
		| /* empty */{
			$$ = NULL;
		}
;

def
		: type_specifier pointers ID ';'{
			$$ = define_normal($1, $2, $3);
		}

		| type_specifier pointers ID '[' const_expr ']' ';'{
			$$ = define_array($1, $2, $3, $5);
		}

		| type_specifier ';'{
			$$ = $1;
		}

		| func_decl ';'{
			$$ = check_function($1);
			pop_scope();
		}
;

compound_stmt
		: '{' local_defs stmt_list '}'
;

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list {
			$$ = $1;
		}
;

stmt_list
		: stmt_list stmt
		| /* empty */
;

stmt
		: expr ';'
		| compound_stmt
		| RETURN ';'{
			ste* ret = find_current_scope(returnid);				
			if (ret != NULL){
				if(!check_type_compat(ret->decl, voidtype, 0)){
					raise("return value is not return type");			
				}
			}
			else{
				if(!check_type_compat(ftn_type_glob, voidtype, 0)){
					raise("return value is not return type");
				}
			}
		}
		| RETURN expr ';' {
			
			if($2==NULL){
			}
			else{
				ste* ret = find_current_scope(returnid);

				// expression must be a constant, a variable or a pointer
				// cannot be func, array constant, or type
				if (ret != NULL){
	
					// if the expr is NULL
					if($2->declclass == _NULL){
						if (!(ret->decl->typeclass == _POINTER)){
							raise("return value is not return type");
						}
					}
					else if(!check_type_compat(ret->decl, $2->type, 0)){
						raise("return value is not return type");			
					}
					
				}
				else{
					if(!check_type_compat(ftn_type_glob, $2->type, 0)){
						raise("return value is not return type");
					}
				}
			}
		}
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
				if ($1==NULL) {$$=NULL;}
				else if ($3==NULL) {$$=NULL;}
				
				// LHS unary must be a pure variable
				// array is not allowed since it is a CONST
				else if (!check_is_var($1, 0)){
					$$ = raise("LHS is not a variable");
				}
					
				// if RHS is NULL
				else if($3->declclass==_NULL){
					// the LHS must be a pointer
					if ($1->type->typeclass == _POINTER){
						$$ = $1;
					}
					else{
						$$ = raise("LHS and RHS are not same type");
					}
				}

				// RHS expr must be a variable(+expr) or a const
				else if (!check_is_const_var($3, 1)
								&& $3->type->typeclass != _ARRAY){
						$$ = raise("RHS is not a const or variable");	
				}

				// RHS and LHS must have same type
				else if (!check_type_compat($1->type, $3->type, 1)){
					$$ = raise("LHS and RHS are not same type");
				}
				
				// otherwise, return the unary itself
				else{
					$$ = $1;
				}
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
				$$ = makevardecl(inttype); // output must be a integer type
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					$$->int_value = $1->int_value || $3->int_value;
					$$->declclass = _CONST;
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
				$$ = makevardecl(inttype); // output must be a integer type
				if(check_is_const($1) && check_is_const($3)){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					$$->int_value = $1->int_value && $3->int_value;
					$$->declclass = _CONST;
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
				$$ = makevardecl(inttype); // output must be a integer type
				if(check_is_const($1) && check_is_const($3)){
					// in case of addition of two integer constants
					if($2==_LT)	$$->int_value = $1->int_value < $3->int_value;
					if($2==_LTE)	$$->int_value = $1->int_value <= $3->int_value;
					if($2==_GT)	$$->int_value = $1->int_value > $3->int_value;
					if($2==_GTE)	$$->int_value = $1->int_value >= $3->int_value;
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXP;
				}
			}
			else{
				$$ = NULL;
			}
		}
		| binary EQUOP binary{
			if(check_rel_equ($1, $3, $$, 1)){
				$$ = makevardecl(inttype); // output must be a integer type
				if(check_is_const($1) && check_is_const($3)){
					// in case of addition of two integer constants
					if($2==_EQ)	$$->int_value = $1->int_value == $3->int_value;
					if($2==_NE)	$$->int_value = $1->int_value != $3->int_value;
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXP;
				}
			}
			else{
				$$ = NULL;
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
			else{
				$$ = NULL;
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
			else{
				$$ = NULL;
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
			id* temp = lookup("char");	
			ste* typeste = find(temp);
			decl* typedecl = typeste->decl;

			$$ = makeptrdecl(typedecl);
			$$->declclass = _EXP; 
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
			else if(!check_type_compat($2->type, inttype, 0)){
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
			else if(!check_type_compat($2->type, inttype, 0)){
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
			}
			else{
				$$ = NULL;
			}
		}

		| unary DECOP{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($1, $$)){
				$$ = $1;
			}
			else{
				$$ = NULL;
			}
		}
		| INCOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
			}
			else{
				$$ = NULL;
			}
		}

		| DECOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
			}
			else{
				$$ = NULL;
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
				$$->declclass = _VAR;
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
			//exp must be a integer
			else if(!check_type_compat($3->type, inttype, 0)){
				$$ = raise("not int type");
			}
			else{
				decl* temp = copy($1->type->elementvar);
				$$ = temp;
				$$->declclass = _VAR;
			}
		}

		| unary '.' ID{
			if($1 == NULL) { $$ = NULL; }
			else if($3 == NULL) { $$ = NULL;}
			
			//unary must be a struct type
			else if(!check_is_struct($1)){
				$$ = raise("variable is not struct");
			}
			
			else{
				// find field entry from the structure type fields
				decl* strtype = $1->type;
				ste* field = find_field(strtype->fields, $3);
				if(field==NULL){
					$$ = raise("struct not have same name field");
				}
				else{
					$$ = copy(field->decl);
				}
			}
		}

		| unary STRUCTOP ID {
			if($1 == NULL) { $$ = NULL;}
			else if($3 == NULL) { $$ = NULL;}

			// unary must be a pointer value
			else if(!check_is_pointer($1)){
				$$ = raise("not a pointer"); // TODO : error message?
			}

			else{
				decl* strtype = $1->type->ptrto;
				// pointer value must be a struct
				if(!check_is_struct_type(strtype)){
					$$ = raise("variable is not struct");
				}
				else{
					// find field entry from the structure type fields
					ste* field = find_field(strtype->fields, $3);
					if(field==NULL){
						$$ = raise("struct not have same name field");
					}
					else{
					$$ = copy(field->decl);
					}
				}
			}

		}
		| unary '(' args ')'{
		
			//debug_args($3);
			
			if($1==NULL) { $$ = NULL; }
			else if ($3==NULL) { $$ = NULL; }

			// unary must be a function 
			else if (!check_is_proc($1)){
				$$ = raise("not a function");
			}
			else{
				//check argument
				if(!check_function_call($1, $3)){
					$$ = raise("actual args are not equal to formal args");
				}
				else {
					// return value is same as return type 
					// and should be a expression
					$$ = makevardecl($1->returntype->decl/* this is type */);
					$$->declclass = _EXP;
				}
			}
		}

		| unary '(' ')'{
			if($1==NULL){ $$ = NULL; }

			// unary must be a function 
			else if (!check_is_proc($1)){
				$$ = raise("not a function");
			}
			else{
				// check arguments
				if(!check_function_call($1, NULL)){
					$$ = raise("actual args are not equal to formal args");
				}
				else {
					// return value is same as return type 
					// and should be a expression
					$$ = makevardecl($1->returntype->decl/* this is type */);
					$$->declclass = _EXP;
				}
			}
		}
;

args    /* actual parameters(function arguments) transferred to function */
		: expr{
			if($1 == NULL){
				$$ = NULL;
			}
			else{
				$$ = copy($1);
			}
		}
		| expr ',' args{
			if($1==NULL){
				$$ = NULL;
			}
			else if ($3 == NULL){
				$$ = NULL;
			}
			else{
				$$ = copy($1);
				$$->next = $3;	
			}
		}
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

void debug_args(decl* x){
	while(x!=NULL) {
			printf("%d ", x->type->typeclass);
			x = x->next;
	}
	printf("\n");
}

