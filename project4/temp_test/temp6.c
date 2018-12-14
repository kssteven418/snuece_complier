
struct str1{
	int x;
	int y;
};


struct str1 sm(int x, int y){
	struct str1 s;
	s.x = x;
	s.y = y;
	return s;
}

struct str1 foo(struct str1 s, int x, int y){
	write_int(s.x);
	write_string("\n");
	s.x = x;
	return s;
}

void main(){
	struct str1 s;

	write_string("Passing function return value directly into argument... ans : 1 2 3 11 22 33\n");
	s = foo(sm(7, 8), 77, 88);
}

