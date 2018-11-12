/* variable redefine */
int a;


int main() {
	int x[10];
	int a;

	/* errors */
	x++;
	a+x;
	x-a;
	!x;
	-x;
	x++;
	--x;
	x&&a;
	a&&x;
	x||a;
	a||x;
	a&&!x||a;

    return 0;
}
