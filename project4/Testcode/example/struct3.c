int global_1;
int global_2;

struct _str1{
	int x;
	int y;
	struct _st2{
		int z;
		int w[5];
	}strstr;
}sample_str;

int main(){
	int i;
	int j;
	int k;
	int *l;
	struct _str1 teststr[10];

	sample_str.strstr.z = 1000;
	i = sample_str.strstr.z;

	write_int(i);
	write_string("\n");
}
