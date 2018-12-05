char* gp;

int foo(char* str){
}

int main(){
	char* lp;
	int x;
	char y;

	gp = "gello";
	lp = "lello";
/*
	foo(gp);
	foo(lp);
	foo("hello");
*/

	write_string(gp);
	write_string("\n");
	write_string(lp);
	write_string("\n");
	write_string("hello");
	write_string("\n");

	write_int(1);
	write_string("\n");
	read_char(y);
	write_char(y);
	write_string("\n");



}

