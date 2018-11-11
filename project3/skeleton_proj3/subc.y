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

int		check_is_declared(id* name);

%}

/* yylval types */
%union {
	int		intVal;
	char	*stringVal;
	id		*idptr;

	decl	*declptr;
	
	int		boolean;
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

%type<declptr> type_specifier
%type<boolean> pointers
%token<idptr> ID
%token<idptr> TYPE VOID STRUCT 
%token<idptr> RETURN IF ELSE WHILE FOR BREAK CONTINUE 
%token<stringVal> LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP 
%token<stringVal> STRING CHAR_CONST INTEGER_CONST

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

		| type_specifier pointers ID '[' const_expr ']' ';'
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
		: binary RELOP binary
		| binary EQUOP binary
		| binary '+' binary
		| binary '-' binary
		| unary %prec '='

unary
		: '(' expr ')'

		| '(' unary ')' 
		| INTEGER_CONST
		| CHAR_CONST
		| STRING
		| ID
		| '-' unary	%prec '!'
		| '!' unary
		| unary INCOP
		| unary DECOP
		| INCOP unary
		| DECOP unary
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
	ste* temp = find_current_scope(name);
	if (temp==NULL) return 0;
	else return 1;
}
