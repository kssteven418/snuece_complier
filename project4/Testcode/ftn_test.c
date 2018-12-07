int x;

struct str{
	int x;
	int y;
}s;

struct str f(struct str s1, int a, int b, struct str s2, int c, int d, int e){
	int xx;


	write_string("Parameter Passing...\n");
	write_string("ans : 11 22 33 44 55 777 888 123 11\n");
	xx = 123;
	write_int(s1.x);
	write_string("\n");
	write_int(a);
	write_string("\n");
	write_int(b);
	write_string("\n");
	write_int(s2.y);
	write_string("\n");
	write_int(c);
	write_string("\n");
	write_int(d);
	write_string("\n");
	write_int(e);
	write_string("\n");

	write_int(xx);
	write_string("\n");
	write_int(x);
	write_string("\n");
	write_string("Ending..!\n");

}

int g(){
}

void main(){
	int y;
	int z;
	struct str s2;
	
	s.x = 777;
	s.y = 888;
	x = 11;
	y = 22;
	z = 33;
	f(s, x, y, s, z, 44, 55);
	write_string("Return safely..!\n");
	write_string("\n");
	write_string("Safety check ... ans : 33 22 777\n");

	write_int(z);
	write_string("\n");
	write_int(y);
	write_string("\n");
}
