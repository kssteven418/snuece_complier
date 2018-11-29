/* variable redefine */
int a;


int main() {
    int a;
    int b;
    char c;
    char d;
	int* p;
	int* q;
	int x[10];
	int y[1+3];
	int w[(1+2)||(3-2)];
	int z[a]; /* error */
	int z['c']; /* error */

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

	/* errors */
	a>=c;
	a==c;
	p==a;
	p!=c;

	(a>=b)||(a==b)&&(a<b);
	(a>=b)||(a==d)&&(a<b); /* error */
	


    return 0;
}
