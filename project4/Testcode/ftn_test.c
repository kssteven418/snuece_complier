int x;

struct str{
	int x;
	int y;
	int z[8];
}s;

struct str f(int a, int b, int c, int d, int e){
	int x;

	x = 123;
	write_int(a);
	write_string("\n");
	write_int(b);
	write_string("\n");
	write_int(c);
	write_string("\n");
	write_int(d);
	write_string("\n");
	write_int(e);
	write_string("\n");

}
int g(){
}

void main(){
	int y;
	int z;
	
	x = 11;
	y = 22;
	z = 33;
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_int(z);
	write_string("\n");
	f(x, y, z, 44, 55);
	g();
}
