


int func(){
}

char* func2(int x){
}

char func3(int x, int* y, char z){
}

int func4(char* x){
}

void main(){
	int x;
	int* y;
	char z;

	/* empty call */
	x(); /* error */
	y(); /* error */
	func();
	func2(); /* error */
	func3(); /* error */
	
	/* parameter call */
	func(x, y); /* error */
	func2(x); 
	func2(x, y); /* error */
	func2(x, y, z); /* error */
	func3(x); /* error */
	func3(x, y); /* error */
	func3(x, y, z); 
	func3(x, y, z, x); /* error */


	func2(y); /* error */
	func2(z); /* error */
	func2(*y);

	func3(z, y, x); /* error */
	func3(x, &x, z);

	func4(y); /* error */
	func4(&z);
	func4(func2(x)); 
	&(func()); /* error */
	&(func2(x)); /* error */

}
