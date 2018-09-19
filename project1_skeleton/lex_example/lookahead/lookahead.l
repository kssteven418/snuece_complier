letter	[A-Za-z]

%%


"++"/{letter}  {printf("++a and yytext has %s\n",yytext);} 

{letter}/"++"  {printf("a++ and yytext has %s\n",yytext);} 
"++"			{printf("wow! %s\n", yytext);}
. 				{ ; }

%%

#include <stdio.h>
main(int argc, char ** argv)
{
	if (argc > 1) {
		FILE * file;
		file = fopen(argv[1], "r");
		if (!file) {
			fprintf(stderr, "could not open %s\n", argv[1]);
			exit(1);	
		} 
		yyin = file;
	}
	yylex();
	return 0;
}

