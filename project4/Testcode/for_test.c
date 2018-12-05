


void main(){
	int i;
	int sum;

	write_string("for basics... ans : 10 45 10 35\n");

	for(i=0; i<10; i++){
		sum = sum + i;
	}
	write_int(i);
	write_string("\n");
	write_int(sum);
	write_string("\n");

	i = 5;
	sum = 0;
	for(; i<10; ){
		sum = sum + i;
		++i;
	}
	write_int(i);
	write_string("\n");
	write_int(sum);
	write_string("\n");


	write_string("for w/ break/continue... ans : 6 21 41 60 60\n");

	sum = 0;
	for(i=0; ; i++){
		sum = sum + i;
		if(sum>20) break;
	}

	write_int(i);
	write_string("\n");
	write_int(sum);
	write_string("\n");

	sum = 0;
	for(i=0; i<100; i++){
		if(i==60) break;
		if(i==41) {
			write_int(i);
			write_string("\n");
		}
		if(i!=20 && i!=40) {
			continue;
		}
		sum = sum + i;
	}

	write_int(i);
	write_string("\n");
	write_int(sum);
	write_string("\n");



}
