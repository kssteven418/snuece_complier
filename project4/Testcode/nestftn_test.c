


int f(int* x){

	write_int(*x);
	write_string("\n");
	(*x)++;
	write_int(*x);
	write_string("\n");
}

int g(int* x){
	write_int(*x);
	write_string("\n");
	f(x);
	write_int(*x);
	write_string("\n");
}

void recursive(int* x){
	(*x)++;
	
	if((*x)<10){

		write_string("Recursion going with ");
		write_int(*x);
		write_string("\n");
		recursive(x);
	}
	else{
		write_string("Recursion ended with ");
		write_int(*x);
		write_string("\n");
	}
}

int fib(int n){
	int x;
	int y;
	x = n-1;
	y = x-1;
	if(n==0){
		return 1;
	}
	else{
		if(n==1){
			return 1;
		}
		else{
			return fib(x)+fib(y);
		}
	}
}
	


void main(){
	int x;
	x = 100;


	write_string("NESTED FUNCTION..! : 100 100 100 101 101 101\n");
	write_int(x);
	write_string("\n");
	g(&x);
	write_int(x);
	write_string("\n");


	write_string("\n");
	write_string("RECURSIVE FUNCTION..!\n");
	x = x-101;
	recursive(&x);
	write_int(x);
	write_string("\n");
	write_string("\n");
	
	write_string("FIBONACCI FUNCTION..! ans = fib(6)\n");
	x = fib(7);
	write_int(x);
	write_string("\n");

}

