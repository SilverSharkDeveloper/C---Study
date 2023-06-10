#include<stdio.h>


struct point {
	int x;
	int y;
};

struct student {
	char name[10];
	struct point* link;
};

void main() {
	
	struct student std1 = { "kim",NULL };
	struct student std2= { "Lee",NULL };
	
	struct point p1 = { 20,30 };
	struct point p2 = { 40,60 };

	std1.link = &p1;
	std2.link = &p1;


}