


int x(int a[10], char b[10]){
	int z[10];
	return z;/* error */
	return 1;
}

int y(int* a, char* b){

}

void main(){
	int a[10];
	char b[10];
	char c;
	int d;

	int* p;
	char* q;
	int* pa[10];
	char* qa[10];

	x(a, b);
	x(b, b); /* error */
	x(a, a); /* error */
	x(c, a); /* error */
	x(pa, c);/* error */
	x(a, qa);/* error */
	x(pa, qa);/* error */
	x(p, c);/* error */
	x(a, q);/* error */
	x(p, q);/* error */

	y(a, b);
	y(b, b); /* error */
	y(a, a); /* error */
	y(c, a); /* error */
	y(pa, c);/* error */
	y(a, qa);/* error */
	y(pa, qa);/* error */
	y(pa[0], qa[0]);
	y(p, c);/* error */
	y(p, &c);
	y(a, q);
	y(&a, q); /* error */
	y(p, q);
	y(p, "string");
	y("string", q); /* error */

}
