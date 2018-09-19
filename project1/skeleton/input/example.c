/************************
     /* nested comments*/
 ************************/


struct _point {    
	    float x, y, z;
		    int color;
} point[20];

struct _line {
	    struct _point *p[2];
		    int color;
			    float meter = 0.5;
} line[20];

1..50
