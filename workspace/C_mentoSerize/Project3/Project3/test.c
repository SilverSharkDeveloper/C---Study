#include<stdio.h>
#include<string.h>
void main() {
	char name[3] = "sm";
	char* name1 = name;
	char* name2 = "bb";

	int* a = 0;
	int b = 0;
	a = &b;

	*a = 1;
	printf("%d", b);

	printf("%s\n", name);
	printf("%s\n", name1);
	printf("%p\n", name);
	printf("%p\n", name1);
	name1[0] = 'i';
	name2[0] = 'b';
	printf("%s\n", name);
	printf("%s\n", name1);
	printf("%p\n", name);
	printf("%p\n", name1);
	/*name1 = "ss";
	printf("%s\n", name);
	printf("%s\n", name1);
	printf("%p\n", name);
	printf("%p\n", name1);*/

	strcpy_s(name, sizeof(name), "cc");
	printf("%s\n", name);
	printf("%s\n", name1);
	printf("%p\n", name);
	printf("%p\n", name1);

	/*printf("%s\n", name2);
	printf("%p\n", name2);

	*name2 = "a";
	printf("%s\n", name2);
	printf("%p\n", name2);*/
}