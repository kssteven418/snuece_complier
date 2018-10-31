%{
#include "example.tab.h"

#include <stdio.h>
#include <string.h>


%}

ws 		[ \t]
num 	[0-9]
OP 		[\+\-\*\/]

%%
\n 		{ return ENTER; }
{ws} 	{}
{num}+ {
	yylval.floatval = atof(yytext);
	return FLOAT;
	}
{OP} 	{ return yytext[0]; }

%%
int main(int argc, char* argv[]){
	yyparse();
	return 0;
}

