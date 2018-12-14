

struct str{
	int x;
	int y;
	int z;
};

/*
int foo(int x){
	int y;
	int z;
	y = 10;
	x = 20;
	return 10;
}
*/

int soo(int x, int y){
	struct str temp;
	int a[10];
	int xx;
	int yy;

	x = 1;
	y = 2;

	xx = 3;
	yy = 4;

	temp.x = 10;
	temp.y = 20;
	temp.z = 30;

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_int(xx);
	write_string("\n");
	write_int(yy);
	write_string("\n");
	write_int(temp.x);
	write_string("\n");
	write_int(temp.y);
	write_string("\n");
	write_int(temp.z);
	write_string("\n");

	return temp.z;
}

void main(){
	int x;
	struct str s1;
	int y;
	int z;
	int w;
	x=soo(100, 200);

	write_int(x);
	write_string("\n");
/*
	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_int(s1.z);
	write_string("\n");


	int x;
	int y;
	x = 1111;
	y = 22;

	x = foo(1);
	write_int(x);
	write_string("\n");
	write_int(foo(1));
	write_string("\n");
*/
}
