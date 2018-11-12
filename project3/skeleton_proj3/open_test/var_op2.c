/* variable redefine */
int a;


int main() {
    int a;
    int b;
    int c;
    char d;
	int* p;

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


    return 0;
}
