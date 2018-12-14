
struct str1{
	int x;
	int a[10];
	int y;
}st;


struct str1 sm(int x, int y){
	struct str1 s;
	s.x = x;
	s.y = y;
	s.a[5] = 123;
	return s;
}

struct str1 foo(int a, int b, struct str1 s, int x, int y){
	write_int(s.x);
	write_string("\n");
	write_int(s.a[5]);
	write_string("\n");
	write_int(a);
	write_string("\n");
	write_int(x);
	write_string("\n");
	s.x = 11111;
	s.y = 22222;
	return s;
}

struct str1 goo(struct str1 s){
	struct str1 temp;
	write_int(s.x);
	write_string("\n");
	write_int(s.y);
	write_string("\n");
	write_int(s.a[5]);
	write_string("\n");
	temp = s;
	temp.x = 987;
	temp.y = 654;
	return temp;
}

void main(){
	struct str1 s;

	write_string("Passing function return value directly into argument... ans : 7 123 8888 77 11111 22222\n");
	s = foo(8888, 9999, sm(7, 8), 77, 88);
	write_int(s.x);
	write_string("\n");
	write_int(s.y);
	write_string("\n");
	write_string("\n");
	
	write_string("Some more test on struct parameter and return... ans : 11111 22222 123 987 654\n");
	st = s;
	s = goo(st);

	write_int(s.x);
	write_string("\n");
	write_int(s.y);
	write_string("\n");



}

