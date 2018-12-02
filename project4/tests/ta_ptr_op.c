/* pointer operation */

int main(void) {
	int a[10];
	int *b;
	char c[20];
	char *d;

	a = b;		/* error */
	a[0] = 0;
	c[5] = 'a';

	b = &a;		/* error */
	b = &a[10];
	b = &b;		/* error */
	b = &*(a+5);/* error */
	b = &(b++);	/* error */
	b = &*(b++); /* error */

	d = b;		/* error */
	d = c;

	c[1] = a[2]; /* error */
	d = &(++d); /* error */
	d = &*(++d); /* error */

	if (b < d) { /* error */
		return -1;
	}

	c = d; /* error */
	d = a; /* error */

	return 0;
}

