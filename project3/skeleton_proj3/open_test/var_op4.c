/* variable redefine */
int a;


int main() {
    int a;
    int b;
	char c;
	int* p;
	char* q;
	int x[10];
	int *xp[10];
	int y[x]; /* error */
	int y[xp]; /* error */

	!!a;

	&a;
	&c;

	/* errors */
	&(a+1);
	&(a+b);
	&(a+c);
	
	&p;
	&x; /* error */
	&(&p); /* error */

	*p;
	*q;

	/* errors */
	*a;
	*c;
	*(p+1);
	*(p+q);
	*x;

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
	
	p==&a;
	p<&a; /* error */
	p==&p;
	q==&p;
	p==&c;

	*p==*(&a);
	*p==a;
	*p==*q; /* error */
	*p==&a; /* error */

	*s; /* error */
	&s; /* error */
	&(*s); /* error */


    return 0;
}
