%{
#include "example.tab.h"

#include <stdio.h>
#include <string.h>


%}
char [A-Za-z]
num [0-9]
eq [=]
name {char}+
age {num}+

%%

{name} {
	yylval = strdup(yytext);
	printf("String : %s\n",yytext);
//	yylval = yytext;
	return NAME; 
}
{eq} { return EQ; }
{age} { 
	char* temp = (char*)malloc(sizeof(char)*(yyleng+1));
	strncpy(temp,yytext,yyleng);
	yylval = temp;
	return AGE; 
}

%%
