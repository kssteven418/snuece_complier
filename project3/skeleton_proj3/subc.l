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
	yylval.stringVal = yytext;
	return CHAR_CONST; }

{logical_or} {
	// printf("LEX %s\n", yytext); 
	return LOGICAL_OR;}

{logical_and} {
	// printf("LEX %s\n", yytext); 
	return LOGICAL_AND;}

{relop} { 
	// printf("LEX %s\n", yytext); 
	return RELOP;}

{equop} {
	// printf("LEX %s\n", yytext); 
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
	decl* voidtype = maketypedecl(_VOID);
	decl* inttype = maketypedecl(_INT);
	decl* chartype = maketypedecl(_CHAR);
	decl* stringtype = maketypedecl(_STRING);

	declare(enter(ID, "void", 4), voidtype); 
	declare(enter(ID, "int", 3), inttype); 
	declare(enter(ID, "char", 4), chartype); 
	declare(enter(ID, "string", 6), stringtype); 
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
	
	// insert keywords in the hash table
   static char *keyword[] = { "int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue",  NULL };
   static int tokentype[] = { TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   // init types
   init_type();
	debugst();


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
