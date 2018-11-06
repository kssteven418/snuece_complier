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
equop ==|!=
plus_plus \+\+
minus_minus \-\-
structop \.

white-space		[ \t]+
special-char	\\[nt]


%x COMMENT
%%


{assignop} { 
	yylval.stringVal = yytext;
	return ASSIGNOP;}

{logical_or} {
	yylval.stringVal = yytext;
	return LOGICAL_OR;}

{logical_and} {
	yylval.stringVal = yytext;
	return LOGICAL_AND;}

{relop} { 
	yylval.stringVal = yytext;
	return RELOP;}

{equop} {
	yylval.stringVal = yytext;
	return EQUOP;}

{plus_plus} {
	yylval.stringVal = yytext;
	return PLUS_PLUS;}

{minus_minus} {
	yylval.stringVal = yytext;
	return MINUS_MINUS;}

{structop} {
	yylval.stringVal = yytext;
	return STRUCTOP;}

{id} {
	/* includes keywords */
	struct id *entered  = enter(ID, yytext, yyleng);
	yylval.stringVal = entered->name;
	return entered->lextype;}

{integer_const}	{
	yylval.intVal = atoi(yytext);
	return INTEGER_CONST;}

\"({special-char}|[^\\\"\n])*\"	{
	/* String Variable */
	yylval.stringVal = yytext;
	return STRING;}

'({special-char}|[^\\'\n])'	{
	/* Character Variable */
	yylval.stringVal = yytext;
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
"["		{ return '['; }
"]"		{ return ']'; }
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
