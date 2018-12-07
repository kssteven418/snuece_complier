


int f(int* x){

	write_int(*x);
	write_string("\n");
	(*x)++;
	write_int(*x);
	write_string("\n");
}

int g(int* x){
	int y;
	int z;
	y = 10;
	z = *x;
	write_int(z);
	write_string("\n");


}

void main(){
	int x;
	int y;
	int* z;
	x = 100;
	y = 200;
	z = &x;
	*(&x) = 300;

	write_int(x);
	write_string("\n");
	g(z);
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
}

