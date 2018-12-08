



struct str{
	int x;
	int y;
	int z;
};

struct str foo(int a, int b, int c){
	struct str temp;
	temp.x = a;
	temp.y = b;
	temp.z = c;
	return temp;
}

struct str soo(int a, int b, int c){
	struct str temp;
	temp.x = a;
	temp.y = b;
	temp.z = c;
	foo(a, b, c);
	foo(a, b, c);
	foo(a, b, c);
	foo(a, b, c);
	foo(a, b, c);
	return temp;
}

void main(){

	struct str temp;
	temp = soo(1, 2, 3);
	write_int(temp.x);
	write_string("\n");
	write_int(temp.y);
	write_string("\n");
	write_int(temp.z);
	write_string("\n");

}
