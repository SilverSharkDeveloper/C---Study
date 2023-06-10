#include<stdio.h>
#include"var.h"
int num1 = 10;
static int num2 = 20;

extern cnum1;
extern cnum2;


void main() {
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", cnum1);
	printf("%d\n", cnum2);
	printf("%d\n", var1);
	printf("%d\n", var2);
	

}