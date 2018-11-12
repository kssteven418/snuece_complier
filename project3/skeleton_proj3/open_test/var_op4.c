/* variable redefine */
int a;


int main() {
    int a;
    int b;
	char c;
	int* p;
	char* q;
	int x[10];
	int *t[10];

	!!a;

	&a;
	&c;

	/* errors */
	&(a+1);
	&(a+b);
	&(a+c);
	
	&p;
	&x;
	&(&p);

	*p;
	*q;

	/* errors */
	*a;
	*c;
	*(p+1);
	*(p+q);
	*x;


    return 0;
}
