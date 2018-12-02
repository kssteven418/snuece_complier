int test(int a, int b, int c){
	return a;
}

int main(){
	int i;
	int j;
	int k;
	int l;

	i = 1;
	j = 2;
	k = 3;

	l = test(i, j, k);
	write_int(l);
	write_string("\n");
}
