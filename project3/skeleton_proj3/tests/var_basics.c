
/* variable redefine */
int a;
int* a; /* error redec */

int main() {

	/* 1. VARIABLE DECLARATION */

    int a;
    char a; /* error */
    int b;
    int b;  /* error */
	int c;
    char d;
	int* p;
	int* pp;
	void v;
	void v2;

	x++;/* error */
	x--;/* error */
	!x;/* error */
	-x;/* error */
	x+1;/* error */
	x-a;/* error */
	a||x;/* error */
	a&&x;/* error */

	
	/* 2.  BASIC INCOP, DECOP */
	a++;
	++a;
	a--;
	--a;

	d++;
	++d;
	d--;
	--d;

	p++;/* error */
	++p;/* error */
	p--;/* error */
	--p;/* error */

	/* INC, DEC on expressions */
	(!a)++;/* error */
	(!a)--;/* error */
	++(!a);/* error */
	--(!a);/* error */
	(-a)++;/* error */
	(-a)--;/* error */
	++(-a);/* error */
	--(-a);/* error */
	(a++)++;
	(++a)++;
	(--a)++;
	(a--)++;
	
	(a+b)++; /* error */
	(a+p)++; /* error */

	++2; /* error */
	++(a+2); /* error */


	/* 3. binary ADD, SUB */
	/* all pass */
	a+a; 
	a-a; 
	a+b;
	a-b;
	b+b;
	b-b;
	b+a;
	b-a;
	
	a+p;/* error */
	a-p;/* error */
	b+p;/* error */
	b-p;/* error */
	p+p;/* error */
	p-p;/* error */
	a+d;/* error */
	a-d;/* error */
	d+p;/* error */
	d-p;/* error */


	/* 4. NEG, AND, OR expression */

	!2;
	!(a+2);

	++2; /* error */
	++(a+2); /* error */

	1&&2;
	(a+1)&&b;
	(a+1)&&b||c;
	(a++)&&b||c;
	
	d||a;/* error */
	d&&a;/* error */
	a||d;/* error */
	a&&d;/* error */
	p&&d;/* error */
	d||p;/* error */
	a||b&&c||p;/* error */


	/* 5. equal operators */

	v=v2;
	v==v2; /* error */

	a = (p==p);
	p = (p==p); /* error */

    a = b;
    a = e;	/* error */

	a == a||b&&c;

    return 0;
}

char* a; /* error redec */
int b; /* ok */
