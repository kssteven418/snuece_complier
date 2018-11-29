
int main() {
	int x[10];
	int a;
	int *xp[10];
	int *p;
	char* q;

	x++; /* error */
	a+x; /* error */
	x-a; /* error */
	!x; /* error */
	-x; /* error */
	x++; /* error */
	--x; /* error */
	x&&a; /* error */
	a&&x; /* error */
	x||a; /* error */
	a||x; /* error */
	a&&!x||a; /* error */

	cp[10]; /* error */
	a[10]; /* error */

	x[1]==a;
	x[1]==1;
	xp[2]==p;
	xp[2]==q; /* error */
	xp[2]==&a;
	xp[2]==&(xp[3]); /* error */
	*(xp[1])==a;
	*(xp[1])==1;
	**(&xp[1]) == a;
	**(&xp[1]) == 1;

	**(&xp[a+1]) == a;
	**(&xp[a]) == 1;

	x[x[x[x[2]]]];
	x[*p];

	xp==a; /* error */
	xp==p; /* error */
	p==xp; /* error */
	*q==*xp; /* error */
	*xp[2] == *q; /* error */
	x[*q]; /* error */
	x[p]; /* error */

    return 0;
}
