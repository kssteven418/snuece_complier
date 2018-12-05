



void main(){

	int x;
	int y;
	int z;

	write_string("only-if statement... ans : 1 1\n");

	if(1){
		if(1){
			write_int(1);
			write_string("\n");
		}
		if(0){
			write_int(2);
			write_string("\n");
		}
	}
	if(0){
		if(1){
			write_int(3);
			write_string("\n");
		}
		if(0){
			write_int(4);
			write_string("\n");
		}
	}
	
	x = 0;
	y = 1;

	if(y){
		if(y){
			write_int(1);
			write_string("\n");
		}
		if(x){
			write_int(2);
			write_string("\n");
		}
	}
	if(x){
		if(y){
			write_int(3);
			write_string("\n");
		}
		if(x){
			write_int(4);
			write_string("\n");
		}
	}

	write_string("if-else statement... ans: 1 4 5 8\n");

	if(1){
		if(1){
			write_int(1);
			write_string("\n");
		}
		else{
			write_int(2);
			write_string("\n");
		}
		if(0){
			write_int(3);
			write_string("\n");
		}
		else{
			write_int(4);
			write_string("\n");
		}
	}
	if(0){
		if(1){
			write_int(1);
			write_string("\n");
		}
		else{
			write_int(2);
			write_string("\n");
		}
		if(0){
			write_int(3);
			write_string("\n");
		}
		else{
			write_int(4);
			write_string("\n");
		}
	}
	else{
		if(1){
			write_int(5);
			write_string("\n");
		}
		else{
			write_int(6);
			write_string("\n");
		}
		if(0){
			write_int(7);
			write_string("\n");
		}
		else{
			write_int(8);
			write_string("\n");
		}
	}
	write_string("while statement... ans : 10 45 2 1 10 45\n");
	
	x = 0;
	y = 0;
	
	while(x<10){
		y = y+x;
		x++;
	}

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");

	x = 1;
	y = 0;
	
	while(x==1){
		y = y+x;
		x++;
	}

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");

	x = 0;
	y = 0;

	while(x!=10){
		y = y+x;
		x++;
	}
	
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");

	write_string("while statement w/ b/c... ans : 7 21 70 30\n");

	x = 0;
	y = 0;
	
	while(x<10){
		y = y+x;
		x++;
		if(y>20){
			break;
		}
	}

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");

	x = 0;
	y = 0;
	
	while(x<=100){
		x++;
		if(x==70) break;
		if(5>=x || x>=10){
			continue;
		}
		y = y+x;
	}

	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");


}
