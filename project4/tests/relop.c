


void main(){
	int* ip;
	char* cp;
	int i;
	char c;

	i>i;
	i==i;
	*ip==*ip;

	
	i>c;/* errors */
	i!=c;/* errors */
	ip>ip;/* errors */
	ip>cp;/* errors */
	*ip>*cp;/* errors */
	*ip==*cp;/* errors */

	ip == ip;
	&i == ip;
	&ip == &ip;

	ip == cp;/* errors */
	&c == ip;/* errors */
	&cp == &ip;/* errors */


}
