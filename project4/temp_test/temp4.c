
int x;

int* temp(){
	x = 10;
	return &x;
}

int temp2(){
	return 10;
}

void main(){
	int* p;
	p = temp();
	write_int(*p);
	write_string("\n");
}
