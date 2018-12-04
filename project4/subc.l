%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include <string.h>
#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;


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
	// printf("LEX %s\n", yytext); 
	// printf("%s %d", yytext, yyleng);
	yylval.idptr = enter(ID, yytext, yyleng);
	return (yylval.idptr)->lextype; }

{integer_const}	{
	// printf("LEX %s\n", yytext); 
	yylval.intVal = atoi(yytext);
	return INTEGER_CONST; }

\"({special-char}|[^\\\"\n])*\"	{
	/* String Variable */
	// printf("LEX %s\n", yytext); 
	yylval.stringVal = yytext;
	return STRING; }

'({special-char}|[^\\'\n])'	{
	/* Character Variable */
	// printf("LEX %s\n", yytext); 
	yylval.charVal = yytext[0];
	return CHAR_CONST; }

{logical_or} {
	// printf("LEX %s\n", yytext); 
	return LOGICAL_OR;}

{logical_and} {
	// printf("LEX %s\n", yytext); 
	return LOGICAL_AND;}

{relop} { 
	// printf("LEX %s\n", yytext); 
	if(strcmp(yytext, "<")) yylval.intVal = _LT;
	if(strcmp(yytext, "<=")) yylval.intVal = _LTE;
	if(strcmp(yytext, ">")) yylval.intVal = _GT;
	if(strcmp(yytext, ">=")) yylval.intVal = _GTE;
	return RELOP;}

{equop} {
	// printf("LEX %s\n", yytext); 
	if(strcmp(yytext, "==")) yylval.intVal = _EQ;
	if(strcmp(yytext, "!=")) yylval.intVal = _NE;
	return EQUOP;}

{incop} {
	// printf("LEX %s\n", yytext); 
	return INCOP;}

{decop} {
	// printf("LEX %s\n", yytext); 
	return DECOP;}

{structop} {
	// printf("LEX %s\n", yytext); 
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
   
// insert type declaration at the symbol table bottom
// p.27
void init_type(){
	null = makeconstdecl(null);
	null->declclass = _NULL;
	voidtype = maketypedecl(_VOID);
	inttype = maketypedecl(_INT);
	chartype = maketypedecl(_CHAR);

	declare(enter(ID, "NULL", 4), null); 
	declare(enter(ID, "void", 4), voidtype); 
	globaldef = sstop->top;
	declare(enter(ID, "int", 3), inttype); 
	declare(enter(ID, "char", 4), chartype); 
	returnid = enter(ID, "*return", 7);
}

int main(int argc, char* argv[])
{

	// initialize scope stack
	// dummy scope_stack at the bottom
	scope_stack* dummy = (scope_stack*)malloc(sizeof(scope_stack)); 
	dummy->prev = NULL;
	sstop = (scope_stack*)malloc(sizeof(scope_stack)); 
	sstop->prev = dummy;

	// dummy ste at the bottom
	ste *temp = (ste*)malloc(sizeof(ste));
	temp->prev = NULL;
	temp->decl = NULL;
	sstop->top = temp; 
	sstop->prev->top = temp;

	// set global scope
	global_scope = sstop;
	
	// insert keywords in the hash table
   static char *keyword[] = { "int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue", "NULL",  NULL };
   static int tokentype[] = { TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, ID, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   // init types
   init_type();
	
   // START UP CODE
   printStartUp();
	
   //debug
   //debugst(sstop->top);
   ste* s;
   id* name;

   if(argc >= 2) {
	   yyin = fopen(argv[1], "r");
	   filename = argv[1];
   }
   else {
	   yyin = stdin;
	   filename = "stdin";
   }
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }
	
   yyparse();

	 // GLOBAL AREA
	 printGlobals();


   fclose(yyin);
   return 0;
}
