%{
/**************************************************************
* File Name   : subc.l
*
* Description
*	This is a skeleton input file to lex.
*
* Which tool to use
*	The GNU lex-clone, flex/flex++ is recommended to use.
*	It supports a C++ mode.
*	For any information about flex, refer to flex.man.
*
*	Good Luck!
*
***************************************************************/

/**************************************************************/
/* This section will appear at the head of lex.yy.c/lex.yy.cc */
/**************************************************************/

#include "subc.h"
/***************************************************************
{Other useful code segments can be here.}
***************************************************************/
int commentdepth=0;

#define KEYWORD 0 
#define ID 1

%}

letter		[A-Za-z_]
alnum		[A-Aa-z0-9_]
digit		[0-9]
ws			[ \t\n]
integer		([1-9]+{digit}*)|0
float		{digit}+\.{digit}*([eE][+-]?{digit}+)?

op_paren	[\(\)\[\]\{\}]
op_bool		!|~|&|&&|\||\|\||\^
op_cal		\+|\-|\/|\*|\%|\+\+|\-\-|<<|>>
op_comp		<|<=|>|>=|==|!=
op_subs		=|\+=|\-=|\*=|\/=|\%=|&=|\|=|\^=|<<=|>>=
op_range	\.\.
op_misc		\->|\.|\,|\?|\:|\;
operation	{op_paren}|{op_bool}|{op_cal}|{op_comp}|{op_subs}|{op_range}|{op_misc}

id			{letter}{alnum}*

%start AA BB

%%
{integer}	{
				printOutput("INT", yytext, -1);
			}
{float}		{
				printOutput("F", yytext, -1);
			}
{operation}	{
				printOutput("OP", yytext, -1);
			}
{id}		{
				id* n_id = enter(ID, yytext, yyleng);
				// this is OK, since if yytext is a keyword,
				// then the tokenType ID will be ignored
				// since there already exist a hash table entry
				// with tokenType KEYWORD
				
				// a new hash table entry with tokenType ID 
				// will be generated only if yytext is a ID
				
				// if ID
				if (n_id->tokenType == ID){
					printOutput("ID", yytext, n_id->count);
				}
				// if KEYWORD
				else{
					printOutput("KEYWORD", yytext, n_id->count);
				}

			}
{ws}		{;}
.			{;}
%%

void printOutput(char* token, char* val, int num){
	printf("%s\t%s", token, val);
	if(num<0) printf("\n"); // if op, int or float
	else printf("\t%d\n", num); // if id or keyword, print # of appearnace
}

//convert tokenType(integer) into string
char* tokenType(int n){
	
	if(n==KEYWORD)
		return "KEY";
	if(n==ID)
		return "ID";
	return "NULL";
}

//print function for debugging
void printId(id* t){
	printf("TYPE : %s, ID NAME : %s, COUNT : %d \n",
			tokenType(t->tokenType), t->name, t->count);
}

//initiate hash with the given keywords
void initHash() 
{
	int i;
	int cnt = 0;

	char* keyWord[]={"auto","break","case","char","continue",
		"default","do","double","else", "extern","float","for",
		"goto","if","int","long","register","return","short",
		"sizeof","static","struct","switch","typedef","union",
		"unsigned","void","while", "\0"};

	/* Initilize Hash Tabel with Keywords */
	for (i = 0; strcmp(keyWord[i], "\0") !=0; i++) {
		cnt ++;
		id* temp = enter(KEYWORD, keyWord[i], strlen(keyWord[i]));
		printId(temp);
	}
	printf("cnt : %d\n", cnt);
}

int main(int argc, char** argv)
{
	id* temp;

	++argv;
	--argc;

	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	initHash();

	BEGIN AA;
	yylex ();

	return 0;
}
