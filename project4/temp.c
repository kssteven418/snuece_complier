int x;
struct str{
	int x;
	int y;
} s;

int h(int x, int y, int z){

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_int(z);
	write_string("\n");
}

int g(struct str s, int x){
	write_int(x);
	write_string("\n");
}
int f(struct str s, int a, int b, int c, int d, int e){

	int temp;
	temp = 123;

	write_string("-s.x\n");
	write_int(s.x);
	write_string("\n");
	write_string("-11\n");
	write_int(a);
	write_string("\n");
	write_string("-22\n");
	write_int(b);
	write_string("\n");
	write_string("-66\n");
	write_int(c);
	write_string("\n");
	write_string("-44\n");
	write_int(d);
	write_string("\n");
	write_string("-55\n");
	write_int(e);
	write_string("\n");
	write_string("-123\n");
	write_int(temp);
	write_string("\n");
	write_string("-11\n");
	write_int(x);
	write_string("\n");
}

void main(){
	int y;
	int z;
	x = 11;
	y = 22;
	z = 33;
	write_string("jump!\n");
	h(x, y, z);
	g(s, y);
	f(s, x, y, x+y+z, 44, 55);

}

