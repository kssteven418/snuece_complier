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

int str_cnt;
int label_cnt;

int loop_start;
int loop_finish;

int for_cond;
int for_change;
int for_stmt;
int for_end;

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
%type<declptr> const_expr expr_e expr or_expr or_list and_expr and_list args
%type<declptr> binary unary
%type<intVal> if_cond

%token<idptr> ID
%token READINT READCHAR WRITEINT WRITESTR WRITECHAR
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
				ftn_name = find_id($1);
				P("%s:\n", ftn_name->name);

				// to make offset + 1 (due ro saved FP is @ FP+0)
				//sstop->size = 1;

				// start up code and start position is @ compound_stmt definition
			} ftn_compound_stmt {
			$$ = check_function($1);
			pop_scope();

			// end up code and final position
			P("%s_final:\n", find_id($1)->name);
			P("\tpush_reg fp\n");
			P("\tpop_reg sp\n");
			P("\tpop_reg fp\n");
			P("\tpop_reg pc\n");
			P("%s_end:\n", find_id($1)->name);
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

compound_stmt /* TODO assume no local defs..? */
		: '{' local_defs stmt_list '}' {
		

		}
;

ftn_compound_stmt
		: '{' local_defs{
				//debugst(sstop->top);
				// -1 since size is assigned size+1 for the correct offset
			int size = sstop->size;
			// allocate memory for local variables
			if(size>0){
				P("\tshift_sp %d\n", size);
			}
			// and then, start position
			P("%s_start:\n", ftn_name->name);
		}
		stmt_list '}'

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
		: expr ';'{
			/* TODO : change all expr by addrToVar */
			/* TODO : shift sp after the expression */
			afterExpr($1);
		}

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

		| if_cond stmt{
				P("label_%d:\n",$1);
			}	%prec IFONLY
				
		| if_cond stmt ELSE{
				// allocate label counter to mark the end of the false branch
				$<intVal>$ = label_cnt; 
				P("\tjump label_%d\n", label_cnt++);

				// label for the false branch
				P("label_%d:\n",$1);
			}
			stmt{
				P("label_%d:\n", $<intVal>4);
			}

		| WHILE {
				// assign label counts for the loop start & finish labels
				loop_start = label_cnt++;
				loop_finish = label_cnt++;

				// while start label
				P("label_%d:\n", loop_start);
			}
			'(' expr ')' {
				addrToVar($4);
				P("\tbranch_false label_%d\n",loop_finish);
			}
			stmt{
				// if following the true branch,
				// jump back to the start point
				P("\tjump label_%d\n", loop_start);
				// finish label for the false point
				P("label_%d:\n", loop_finish);
			}

		| FOR {
				// allocate labels
				for_cond = label_cnt++;
				for_change = label_cnt++;
				for_stmt = label_cnt++;
				for_end = label_cnt++;
				// for break and continue statement
				loop_start = for_change;
				loop_finish = for_end;

			}'(' expr_e ';' {
				// pop out the expression
				afterExpr($4);		
				P("label_%d:\n", for_cond);
			} 

			expr_e ';' {
				// if condition false, jump out of the for statement
				P("\tbranch_false label_%d\n", for_end);
				// if true, keep going
				P("\tjump label_%d\n", for_stmt);
				P("label_%d:\n", for_change);
			}
			
			expr_e ')' {
				// pop out the expression
				afterExpr($4);		
				P("\tjump label_%d\n", for_cond);
				P("label_%d:\n", for_stmt);
			}

			stmt{
				P("\tjump label_%d\n", for_change);
				P("label_%d:\n", for_end);
			}

		| BREAK ';'{
			P("\tjump label_%d\n", loop_finish);
		}
		
		| CONTINUE ';'{
			P("\tjump label_%d\n", loop_start);
		}

		/* I/O statements */
		| READINT '(' unary ')'{
			// address is at the stack top
			P("\tread_int\n");
			P("\tassign\n");
		}

		| READCHAR '(' unary ')'{
			P("\tread_char\n");
			P("\tassign\n");
		}

		| WRITEINT '(' unary ')'{
			addrToVar($3);
			P("\twrite_int\n");
		}

		| WRITECHAR '(' unary ')'{
			addrToVar($3);
			P("\twrite_char\n");
		}
				
		| WRITESTR '(' unary ')'{
			addrToVar($3);
			P("\twrite_string\n");
		}
;

if_cond
		: IF '(' expr ')' {
				addrToVar($3);
				P("\tbranch_false label_%d\n",label_cnt);
				$$ = label_cnt++;
		}
	;

expr_e
		: expr{
			$$ = $1;
		}
		| /* empty */{
			$$ = makeconstdecl(inttype); 
			P("\tpush_const 1\n");
		}
;

const_expr
		: expr{
			//should be a constant
			if(check_is_const($1)){
				$$ = $1;
				afterExpr($$);
			}
			else{
				$$ = raise("not constant");
			}
		}
;

expr
		: unary {
				// address of unary(variable) will be at the stack top
				P("\tpush_reg sp\n");
				P("\tfetch\n"); // copy yhe address

			}'=' expr{
				if ($1==NULL) {$$=NULL;}
				else if ($4==NULL) {$$=NULL;}
				
				// LHS unary must be a pure variable
				// array is not allowed since it is a CONST
				else if (!check_is_var($1, 0)){
					$$ = raise("LHS is not a variable");
				}
					
				// if RHS is NULL
				else if($4->declclass==_NULL){
					// the LHS must be a pointer
					if ($1->type->typeclass == _POINTER){
						$$ = $1;
					}
					else{
						$$ = raise("RHS is not a const or variable");
					}
				}

				// RHS expr must be a variable(+expr) or a const
				else if (!check_is_const_var($4, 1)
								&& $4->type->typeclass != _ARRAY){
						$$ = raise("RHS is not a const or variable");	
				}

				// RHS and LHS must have same type
				else if (!check_type_compat($1->type, $4->type, 1)){
					$$ = raise("LHS and RHS are not same type");
				}
				
				// otherwise, return the unary itself
				else{
					$$ = $1;
					addrToVar($4);
					printAssign($4);
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
					// in case of addition of two integer constants
					$$->int_value = $1->int_value || $3->int_value;
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXP;
				}
				P("\tor\n");
			}
			else{
					$$ = NULL;
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
					// in case of addition of two integer constants
					$$->int_value = $1->int_value && $3->int_value;
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXP;
				}
				P("\tand\n");
			}
			else{
				$$ = NULL;
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

				printRelEqu($2);
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

				printRelEqu($2);
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
				
				printArithmetic(_PLUS);
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

				printArithmetic(_MINUS);
			}
			else{
				$$ = NULL;
			}
			
		}
		| unary %prec '='{
			$$ = copy($1);
			addrToVar($$);
			if($$->declclass==_VAR){ //TODO : correct?
					$$->declclass = _EXP;
			}
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
			
			P("	push_const %d\n", $1);
		}

		| CHAR_CONST{
			ste* temp = find(lookup("char"));
			// construct a new constant declaration
			decl* const_decl = makeconstdecl(temp->decl);
			const_decl->char_value = $1;
			$$ = const_decl;

			P(" push_const %d\n", $1);
		}

		| STRING{
			id* temp = lookup("char");	
			ste* typeste = find(temp);
			decl* typedecl = typeste->decl;

			$$ = makeptrdecl(typedecl);
			$$->declclass = _EXP; 

			P("str_%d. string %s\n", str_cnt, $1);
			P("\tpush_const str_%d\n", str_cnt++);

		}


		| ID{
			//printf("ID start\n");

			id* name = $1;	
			// find in all scopes
			ste* id_ste = find(name); 
			if(id_ste==NULL){
				//use without definition
				$$ = raise("not declared");
			}
			else{
				// copy declaration : not in the symbol table
				if(id_ste->decl->declclass==_FUNC){
						$$ = id_ste->decl; 
				}
				else{ 
					$$ = copy(id_ste->decl); 
				}
				// Load address of the variable
				printLoadVar($$);

			}
			//printf("ID end\n");
		
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

				addrToVar($2);
				P("\tnegate\t");

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

				addrToVar($2);
				P("\tnot\t");
			}
		}

		| unary INCOP{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($1, $$)){
				$$ = $1;
				$$->declclass = _EXP;
				printIncDec(1, 0);
			}
			else{
				$$ = NULL;
			}
		}

		| unary DECOP{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($1, $$)){
				$$ = $1;
				$$->declclass = _EXP;
				printIncDec(0, 0);
			}
			else{
				$$ = NULL;
			}
		}
		| INCOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
				printIncDec(1, 1);
			}
			else{
				$$ = NULL;
			}
		}

		| DECOP unary{
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec($2, $$)){
				$$ = $2;
				printIncDec(0, 1);
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

				printFetchPtr($2);
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
				$$ = raise("not array type"); 
			}
			//exp must be a integer
			else if(!check_type_compat($3->type, inttype, 0)){
				$$ = raise("not int type");
			}
			else{
				decl* temp = copy($1->type->elementvar);
				$$ = temp;
				$$->declclass = _VAR;

				// stack top will be : expr unary(addr) #
				// if expr is an address, e.g. a[x], then get the value
				addrToVar($3); 
				// in case of struct array, the size is not 1
				if ($$->size>1){
						P("\tpush_const %d\n", $$->size);
						P("\tmul\n");
				}
				P("\tadd\n");

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
					int offset = $$->offset;
					P("\tpush_const %d\n", $$->offset);
					P("\tadd\n");
				}
			}
		}

		| unary STRUCTOP ID {
			if($1 == NULL) { $$ = NULL;}
			else if($3 == NULL) { $$ = NULL;}

			// unary must be a pointer value
			else if(!check_is_pointer($1)){
				$$ = raise("not a pointer"); 
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
					printFetchPtr($1);
					int offset = $$->offset;
					P("\tpush_const %d\n", $$->offset);
					P("\tadd\n");

					}
				}
			}

		}
		| unary '('{
		
				// CALLER's responsibility
				P("\tshift_sp %d\n", $1->returntype->decl->size); // return value
				P("\tpush_const label_%d\n", label_cnt); // ret address
				P("\tpush_reg fp\n"); // frame pointer

				// fp->current sp
				P("\tpush_reg sp\n");
				P("\tpop_reg fp\n");

		
			} args ')'{
			
			if($1==NULL) { $$ = NULL; }
			else if ($4==NULL) { $$ = NULL; }

			// unary must be a function 
			else if (!check_is_proc($1)){
				$$ = raise("not a function");
			}
			else{
				//check argument
				if(!check_function_call($1, $4)){
					$$ = raise("actual args are not equal to formal args");
				}
				else {
					// return value is same as return type 
					// and should be a expression
					$$ = makevardecl($1->returntype->decl/* this is type */);
					$$->declclass = _EXP;

					decl* actuals = $4;

					printParams(actuals);

					//printf("hello~~\n");
					P("\tjump %s\n", find_id($1)->name);

					// mark the label to set the return address
					P("\tlabel_%d:\n",label_cnt++);
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

					// CALLER's responsibility
					P("\tshift_sp %d\n", $1->returntype->decl->size); // return value
					P("\tpush_const label_%d\n", label_cnt); // ret address
					P("\tpush_reg fp\n"); // frame pointer

					// fp->current sp
					P("\tpush_reg sp\n");
					P("\tpop_reg fp\n");

					// jump to the target address
					// debugst(sstop->top);
					//printf("%d\n", $1->declclass);
					P("\tjump %s\n", find_id($1)->name);

					// mark the label to set the return address
					P("\tlabel_%d:\n",label_cnt++);
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
				afterExpr($1);
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
				afterExpr($1);
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

