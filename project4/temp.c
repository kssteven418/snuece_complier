


int main(){

	int x;
	int *p;
	int *q;
	p = &x;
	q = p;
	*q = 10;

	write_int(x);
	write_string("\n");
	write_int(*p);
	write_string("\n");
	write_int(*q);
	write_string("\n");


}
