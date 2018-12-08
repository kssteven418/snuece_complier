
struct str1{
	int x;
	int y;
	int a[10];
	int z;
	int w;
};


struct str1 sm(int x, int y, int z, int w){
	struct str1 s;
	s.x = x;
	s.y = y;
	s.z = z;
	s.w = w;
	return s;
}



void main(){
	struct str1 s;
	s = sm(1, 2, 3, 4);
	write_int(s.x);
	write_string("\n");
	write_int(s.y);
	write_string("\n");
	write_int((sm(1, 2, 3, 4).x+1));
	write_string("\n");
	write_int(sm(1, 2, 3, 4).y);
	write_string("\n");
	write_int(sm(1, 2, 3, 4).z);
	write_string("\n");
	write_int(sm(1, 2, 3, 4).w);
	write_string("\n");

}

