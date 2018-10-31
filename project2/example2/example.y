%{
#include <stdio.h>
%}
%union{
	int 	intval;
	float floatval;
}

%token 	ENTER
%token<floatval> FLOAT
%type<floatval> expr binary

%left 	'*' '/'
%left 	'+' '-'

%%

expr: binary ENTER { 
	printf("Result = %.1f\n",$1);
	return 0;
}

binary: binary '+' binary { 
			$$ = $1 + $3; 
			printf("%.1f = %.1f + %.1f\n",$$,$1,$3);
		}
	|	binary '-' binary { 
		$$ = $1 - $3; 
		printf("%.1f = %.1f - %.1f\n",$$,$1,$3);
	}
	| 	binary '*' binary { 
		$$ = $1 * $3; 
		printf("%.1f = %.1f * %.1f\n",$$,$1,$3);
	}
	| 	binary '/' binary { 
		$$ = $1 / $3; 
		printf("%.1f = %.1f / %.1f\n",$$,$1,$3);
	}
	| 	FLOAT 			{ $$ = $1; }

%%
int yyerror(char *msg) {
	printf("Error encountered: %s \n", msg);
}
