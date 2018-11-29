


int fun(){
	return 1;
}

int fun(){ /* error */
	int x;
	return 'a'; /* error */
}

char fun(){ /* error */
	int x;
	return 'a';
}

void fun(){ /* error */
	return;
}

void fun(){ /* error */
	return 1; /* error */
}

void fun(){ /* error */
	int fun();
	char fun(); /* error */
	return;
}

int main(){

	int a;
	char b;

	&a.i; /* error */

}
