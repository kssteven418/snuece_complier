/* variable redefine */
int a;


int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;
	int* p;

    a = b;
    a = e;	/* error */
	
	/* int INCOP, DECOP */
	a++;
	++a;
	a--;
	--a;

	/* char INCOP, DECOP */
	d++;
	++d;
	d--;
	--d;

	/* ptr INCOP, DECOP, all errors */
	p++;
	++p;
	p--;
	--p;

	/* INCOP and DECOP at expression, all errors */
	(!a)++;
	(!a)--;
	++(!a);
	--(!a);
	(-a)++;
	(-a)--;
	++(-a);
	--(-a);
	(a++)++;
	(++a)++;
	(--a)++;
	(a--)++;

    return 0;
}
