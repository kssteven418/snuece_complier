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
	char	*stringVal;
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
%token<stringVal> TYPE STRUCT 
%token<stringVal> RETURN IF ELSE WHILE FOR BREAK CONTINUE 
%token<stringVal> LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP 
%token<stringVal> VOID STRING CHAR_CONST ID INTEGER_CONST

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
		: TYPE
		| VOID
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
		: '*'
		| /* empty */
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
		: type_specifier pointers ID ';'
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
