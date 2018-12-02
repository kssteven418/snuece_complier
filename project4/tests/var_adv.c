
/* variable redefine */
int a;
int* a; /* error redec */

int main() {

    int a;
    int b;
    char c;
    char d;
	int* p;
	int* q;

	/* 1. ARRAY DECLARATIONS */

	int x[10];
	int y[1+3];
	int w[(1+2)||(3-2)];
	int z[a]; /* error */
	int z['c']; /* error */

	/* 2. BASIC EQUOPS and RELOPS */
	a>=b;
	a==b;
	c>d;
	c!=d;
	a<(a+b);
	a!=(a+b);
	p<=q; /* error */
	p<q; /* error */
	p==q;
	p!=q;

	a>=c;/* error */
	a==c;/* error */
	p==a;/* error */
	p!=c;/* error */

	(a>=b)||(a==b)&&(a<b);
	(a>=b)||(a==d)&&(a<b); /* error */
	
	a = (a>=b)||(a==b)&&(a<b);
	p = (a>=b)||(a==b)&&(a<b); /* error */
	*p = (a>=b)||(a==b)&&(a<b);

    return 0;
}

int main2(){
    int a;
    int b;
	char c;
	int* p;
	char* q;
	int x[10];
	int *xp[10];
	int y[x]; /* error */
	int y[xp]; /* error */
	char* cp;
	char ca[10];
	char* cpa[10];

	/* 3. BASIC POINTER / ARRAY OPERATIONS */
	!!a;

	&a;
	&c;

	&(a+1); /* error */
	&(a+b); /* error */
	&(a+c); /* error */
	
	&p;
	&x; /* error */
	&(&p); /* error */

	*p;
	*q;

	*a;/* error */
	*c;/* error */
	*(p+1);/* error */
	*(p+q);/* error */
	*x;/* error */

	*p;
	*(&p);
	**(&p);
	***(&p); /* error */
	*a; /* error */
	*(&a);
	**(&a); /* error */

	(*(&a))++; 
	(*p)++; 
	(*(&a)+1)++; /* error */
	p++; /* error */
	1+(a++);
	(*p)+(a++);
	(*q)+(a++); /* error */
	(*p)+(*q); /* error */
	(*p)+c; /* error */
	
	
	/* 4. POINTER COMPARISON */

	/* pointer pointing different types is illegal */
	p==&a;
	p<&a; /* error */
	p==&p;/* error */
	q==&p;/* error */
	p==&c;/* error */

	*p==*(&a);
	*p==a;
	*p==*q; /* error */
	*p==&a; /* error */

	*s; /* error */
	&s; /* error */
	&(*s); /* error */

	/* 5. ASSIGNING TO THE POINTER */
	*p = 1;
	*p = 'a';/* error */
	*(&p) = 1;/* error */
	**(&p) = 1; 
	*p = *p;
	*p = p; /* error */
	*p = *(&x[10]);
	

	/* 6. STRING OPERATIONS */

	&c == "string";
	&cp == "string"; /* error */
	"string" == "str";
	"str" < "string"; /* error */ 
	"string" = "str"; /* error */
	cp = "string";
	ca = "string"; /* error */
	cpa = "string"; /* error */
	cpa[0] = "string"; 
	*(cpa[0]) = "string"; /* error */

	&"string"; /* error */
	*"string"; 

	(a) = 3;

}
