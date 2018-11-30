
int f(int x, int y){
}

int g(int x, int y){
	return 1+'a'; /* error */
	return f(1, 2);
	return f('a', 2); /* error */
	return f(1, 2, 3); /* error */
	return f(1); /* error */
	return g(1, 2);
	return g(1, 'a'); /* error */
	return g(1, 2, 3); /* error */
	return g(1); /* error */
}

int h(int x, int x){ /* error */
	int x; /* error */
	int y;
	int z;
}
