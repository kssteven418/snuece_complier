/* variable redefine */
int a;


int main() {
    int a;
    int b;
    int c;
    char d;
	int* p;
	int* pp;
    a = b;
	
	(a+b)++; /* error */
	(a+p)++; /* error */
	(!a)++; /* error */
	a++;

	!(a+b);
	!(a-b);
	-(a+b);
	-(a-b);

	!2;
	!(a+2);

	++2; /* error */
	++(a+2); /* error */

	1&&2;
	(a+1)&&b;
	(a+1)&&b||c;
	
	/* errors */
	d||a;
	d&&a;
	a||d;
	a&&d;
	p&&d;
	d||p;
	a||b&&c||p;



    return 0;
}
