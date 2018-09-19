%s AA BB

%%
<AA>magic { printf("BEGIN BB\n"); BEGIN BB; }
<BB>magic { printf("BEGIN AA\n"); BEGIN AA; }

magic { printf("Start"); BEGIN AA; }

<AA>. { printf("[AA] %s\n", yytext); }
<BB>. { printf("[BB] %s\n", yytext); }

%%
main()
{
	BEGIN AA;
	yylex();
}
