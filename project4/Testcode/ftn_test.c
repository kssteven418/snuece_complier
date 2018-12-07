int x;

struct str{
	int x;
	int z[8];
	int y;
}s;

struct str f(int a, int b, int c, struct str s1, struct str s2, int d, int e){
	int xx;


	write_string("Parameter Passing...\n");
	write_string("ans : 11 22 33 44 55 777 888 123 11\n");
	xx = 123;
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
	write_int(s1.z[5]);
	write_string("\n");
	write_int(s2.y);
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
	
	s.z[5] = 777;
	s2.y = 888;
	x = 11;
	y = 22;
	z = 33;
	f(x, y, z, s, s2, 44, 55);
	write_string("Return safely..!\n");
	write_string("\n");
	write_string("Safety check ... ans : 33 22 777\n");

	write_int(z);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_int(s.z[5]);
	write_string("\n");
}
