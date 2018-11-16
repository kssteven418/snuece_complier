/* variable redefine */
int a;

int main() {
    int a;
    int a2;
    char c;
    char c2;
	int* p;
	int* p2;
	char* q;
	char* q2;

	int aarr[10];
	char carr[10];
	int* parr[10];
	char* qarr[10];

	/* primitive types */
	a = a2;
	c = c2;
	p = p2;
	q = q2;
	/* errors */
	a = c;
	c = p;
	p = q;
	q = p;
	q = a;

	/* array type */
	aarr[1] = a;
	a = aarr[1];
	carr[1] = c;
	c = carr[1];
	parr[1] = p;
	p = parr[1];
	qarr[1] = q;
	q = qarr[1];
	/* errors */
	q = parr[2];
	parr[1] = q;
	aarr[1] = c;
	c = aarr[1];
	/* errors */
	p = aarr;
	aarr = p;

	/* primitive type expressions */
	a = aarr[1] + (*parr[2]);
	(a = 1) + 1;
	(a = 1) + *p;
	a = (p == parr[1]); 

	/* error */
	p = &aarr;
	(a = 1) + p;

    return 0;
}

