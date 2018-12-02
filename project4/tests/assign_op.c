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

	/* 1. PRIMITIVE TYPES */

	a = a2;
	c = c2;
	p = p2;
	q = q2;

	a = c;/* error */
	c = p;/* error */
	p = q;/* error */
	q = p;/* error */
	q = a;/* error */


	/* 2. ARRAY TYPES */
	
	aarr[1] = a;
	a = aarr[1];
	carr[1] = c;
	c = carr[1];
	parr[1] = p;
	p = parr[1];
	qarr[1] = q;
	q = qarr[1];

	q = parr[2];/* error */
	parr[1] = q;/* error */
	aarr[1] = c;/* error */
	c = aarr[1];/* error */
	aarr = p;/* error */


	/* 3. EXPRESSIONS */

	a = aarr[1] + (*parr[2]);
	(a = 1) + 1;
	(a = 1) + *p;
	(a = 1)++;
	(c = 'a')++;
	(c = 'a') + 'a'; /* error */
	a = (p == parr[1]); 

	p = &aarr;/* error */
	(a = 1) + p;/* error */


	/* 4. ARRAY AND POINTER */

	p = aarr;
	aarr = p; /* error */
	q = carr;
	carr = q; /* error */
	p = carr; /* error */
	q = aarr; /* error */
	

    return 0;
}

