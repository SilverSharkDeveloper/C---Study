#include<stdio.h>
#include<stdlib.h>
typedef struct Animal {
	int age;
	char *name;
	double c;
	char* feed;
}A;


void main() {
	
	A a = { 5,"afafasdfsdfsaffdafdf",3.4,"asdasfdasfaffasdfaf"};
	/*printf("%d\n", sizeof(A));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(A*));
	printf("%s\n", a.name);
	*/
	
	A* b = &a;

	printf("%d\n", a.age);
	printf("%d\n", (*b).age);
	printf("%d\n", b->age);


	


	//printf("%d\n", sizeof(A));
	


	
}