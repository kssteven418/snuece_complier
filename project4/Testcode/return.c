

void f(int x, int *y){
	write_int(x);
	write_string("\n");
	write_int(*y);
	write_string("\n");

	*y = 100;

	write_int(*y);
	write_string("\n");

	return;
	/* this must be ignored */
	x = 123;
	*y = 456;
	write_int(x);
	write_string("\n");
	write_int(*y);
	write_string("\n");

}


struct str{
	int x;
	int y;
	int y1;
	int y2;
	int y3;
	int y4;
	int y5;
	int y6;
	int y7;
	int y8;
} s;

struct str soo(int x, struct str s){
	struct str temp;

	temp.x = 100;
	temp.y = 200;

	return temp;
	
}


void main(){
	int x;
	int y;
	struct str s1;
	struct str s2;
	struct str s3;

	x = 10;
	y = 20;

	s1.x = 1;
	s1.y = 2;

	s2.x = 10;
	s2.y = 20;

	write_string("Testing for RETURN; statement... Ans : 10, 20, 100, 10, 100\n");
	f(x, &y);
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_string("\n");

	write_string("Testing for RETURN struct; statement... Ans : 10, 20, 100, 10, 100\n");
	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");

	s3 = soo(1000, s1);

	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");

	write_int(s3.x);
	write_string("\n");
	write_int(s3.y);
	write_string("\n");

}
