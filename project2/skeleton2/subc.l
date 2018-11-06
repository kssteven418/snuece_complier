%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
#define DEBUG 0
static int comment_depth = 0;
static int lineno = 1;

%}

/* regular definitions */
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
integer_const	([1-9]{digit}*)|"0"

assignop \+=|\-=|\*=|\/=|\%=
logical_or \|\|
logical_and &&
relop <|<=|>|>=
equop ==|!=s
plus_plus \+\+
minus_minus \-\-
structop \.

white-space		[ \t]+
special-char	\\[nt]


%x COMMENT
%%


{assignop} { 
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**ASSIGNOP : %s\n", yylval);
	return ASSIGNOP;}

{logical_or} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**LOGICAL_OR : %s\n", yylval);
	return LOGICAL_OR;}

{logical_and} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**LOGICAL_AND : %s\n", yylval);
	return LOGICAL_AND;}

{relop} { 
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**RELOP : %s\n", yylval);
	return RELOP;}

{equop} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**EQUOP : %s\n", yylval);
	return EQUOP;}

{plus_plus} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**PLUS_PLUS : %s\n", yylval);
	return PLUS_PLUS;}

{minus_minus} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**MINUS_MINUS : %s\n", yylval);
	return MINUS_MINUS;}

{structop} {
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**STRUCT_OP : %s\n", yylval);
	return STRUCTOP;}

{id} {
	/* includes keywords */
	struct id *entered  = enter(ID, yytext, yyleng);
	yylval.stringVal = entered->name;
	return entered->lextype;}

{integer_const}	{
	yylval.intVal = atoi(yytext);
//	if(DEBUG) printf("**INTEGER : %d\n", yylval);
	return INTEGER_CONST;}

\"({special-char}|[^\\\"\n])*\"	{
	/* String Variable */
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**STRING : %s\n", yylval);
	return STRING;}

'({special-char}|[^\\'\n])'	{
	/* Character Variable */
	yylval.stringVal = yytext;
//	if(DEBUG) printf("**CHAR : %s\n", yylval);
	return CHAR_CONST;}

","		{ return ','; }
"!"		{ return '!'; }
"+"		{ return '+'; }
"-"		{ return '-'; }
"*"		{ return '*'; }
"/"		{ return '/'; }
"%"		{ return '%'; }
"&"		{ return '&'; }
"|"		{ return '|'; }
"="		{ return '='; }
"(" 	{ return '('; }
")" 	{ return ')'; }
"{" 	{ return '{'; }
"}" 	{ return '}'; }
";"		{ return yytext[0]; }

{white-space}

<*>\n		   ++lineno;

<INITIAL,COMMENT>"/*"	{
		   ++comment_depth;
		   BEGIN (COMMENT);
		}
<COMMENT>"*/"	   if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.		 {}


%%

int read_line()
{
   return lineno;
}
   
int main(int argc, char* argv[])
{
   static char *keyword[] = { "int", "char", "struct", "return", "if", "else", "while", "for", "break", "continue",  NULL };
   static int tokentype[] = { TYPE, TYPE, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   if(argc >= 2) yyin = fopen(argv[1], "r");
   else yyin = stdin;
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }
	
   yyparse();
   fclose(yyin);
   return 0;
}
