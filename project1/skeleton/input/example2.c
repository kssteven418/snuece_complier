/************************
     /* nested comments*/
 ************************/


struct _point {    
	    float x, y, z;
		    int color;
} point[20];

int foo(int x, int y, int z){

	/*/*/* returns */ average */ value of x, y, z*/
	int temp = x+y+z;
	temp = temp/3;
	return temp;
}

struct _line {
	struct _point *p[2];
	int color;
	float meter = 0.5;
	p[1].x = p[1].x+1;
	p[1].x++;
	p[2].color = (p[1].x+p[1].y+p[1].z)*(p[1].x+p[1].y+p[1].z);
	for (int i=0; i<2; i++){
		p[i].color = foo(p[i].x, p[i].y, p[i].z);
	}
} line[20];

1..50
1.1..1.2
1.1..2
2..1.1
