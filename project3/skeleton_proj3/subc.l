%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;
/*


%token TYPE STRUCT 
%token RETURN IF ELSE WHILE FOR BREAK CONTINUE 
%token LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP 
%token VOID STRING CHAR_CONST ID INTEGER_CONST

*/

%}

/* regular definitions */
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
integer_const	([1-9]{digit}*)|"0"


logical_or \|\|
logical_and &&
relop <|<=|>|>=
equop ==|!=
incop \+\+
decop \-\-
structop \->

white-space		[ \t]+
special-char	\\[nt]


%x COMMENT
%%

{id}	{
	yylval.idptr = enter(ID, yytext, yyleng);
	return (yylval.idptr)->lextype; }

{integer_const}	{
	yylval.intVal = atoi(yytext);
	return INTEGER_CONST; }

\"({special-char}|[^\\\"\n])*\"	{
	/* String Variable */
	yylval.stringVal = yytext;
	return STRING; }

'({special-char}|[^\\'\n])'	{
	/* Character Variable */
	yylval.stringVal = yytext;
	return CHAR_CONST; }

{logical_or} {
	return LOGICAL_OR;}

{logical_and} {
	return LOGICAL_AND;}

{relop} { 
	return RELOP;}

{equop} {
	return EQUOP;}

{incop} {
	return INCOP;}

{decop} {
	return DECOP;}

{structop} {
	return STRUCTOP;}

","		{  return ','; }
"="		{  return '='; }

"&"		{  return '&'; }
"+"		{  return '+'; }
"-"		{  return '-'; }
"*"		{  return '*'; }

"!"		{  return '!'; }

"(" 	{  return '('; }
")" 	{  return ')'; }
"["		{  return '['; }
"]"		{  return ']'; }
"."		{  return '.'; }

"{" 	{  return '{'; }
"}" 	{  return '}'; }
";"		{  return yytext[0]; }

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

	// initialize scope stack
	// dummy scope_stack at the bottom
	sstop = (scope_stack*)malloc(sizeof(scope_stack)); 
	sstop->prev = NULL;
	// dummy ste at the bottom
	ste *temp = (ste*)malloc(sizeof(ste));
	temp->prev = NULL;
	temp->decl = NULL;
	sstop->top = temp; 

   static char *keyword[] = { "int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue",  NULL };
   static int tokentype[] = { TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0 };
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
