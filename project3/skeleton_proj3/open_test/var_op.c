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

	/* not declared */
	x++;
	x--;
	!x;
	-x;
	x+1;
	x-a;
	a||x;
	a&&x;

	
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

	/* binary ADD, SUB */
	/* all pass */
	a+a; 
	a-a; 
	a+b;
	a-b;
	b+b;
	b-b;
	b+a;
	b-a;
	
	/* all errors */
	a+p;
	a-p;
	b+p;
	b-p;
	p+p;
	p-p;
	a+d;
	a-d;
	d+p;
	d-p;



    return 0;
}
