/* variable redefine */
int a;


int main() {
	int x[10];
	int a;
	int *xp[10];
	int *p;
	char* q;

	cp[10]; /* error */
	a[10]; /* error */

	x[1]==a;
	x[1]==1;
	xp[2]==p;
	xp[2]==q;
	xp[2]==&a;
	xp[2]==&(xp[3]);
	*(xp[1])==a;
	*(xp[1])==1;
	**(&xp[1]) == a;
	**(&xp[1]) == 1;

	**(&xp[a+1]) == a;
	**(&xp[a]) == 1;

	x[x[x[x[2]]]];
	x[*p];

	/* errors */
	xp==a;
	xp==p;
	p==xp;
	*q==*xp;
	*xp[2] == *q;
	x[*q];
	x[p];
	


    return 0;
}
