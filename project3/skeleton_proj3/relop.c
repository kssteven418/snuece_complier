


void main(){
	int* ip;
	char* cp;
	int i;
	char c;

	i>i;
	i==i;
	*ip==*ip;

	/* errors */
	i>c;
	i!=c;
	ip>ip;
	ip>cp;
	*ip>*cp;
	*ip==*cp;

	ip == ip;
	&i == ip;
	&ip == &ip;

	/* errors */
	ip == cp;
	&c == ip;
	&cp == &ip;


}
