#include<stdio.h>

void main() {
	int data = 10;
	int* pData = &data;

	printf("%p\n", &data);
	printf("%p\n", (pData +1));
	printf("%d\n", *pData);

	int arData[5] = {0,};	
}