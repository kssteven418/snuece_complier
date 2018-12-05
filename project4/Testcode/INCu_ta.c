int main(){
	int a;
	int b;

	a = 17;
	b = 17;

	write_int(++a);
	write_string("\n");
	write_int(a);
	write_string("\n");

	write_int(b++);
	write_string("\n");
	write_int(b);
	write_string("\n");
}
