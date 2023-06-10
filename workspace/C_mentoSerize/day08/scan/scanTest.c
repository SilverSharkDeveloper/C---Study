#include<stdio.h>

void main() {
	int num1 = 0, num2 = 0, result = 0;

	printf("첫번째 정수 :");
	scanf_s("%d", &num1);

	printf("두번째 정수 :");
	scanf_s("%d", &num2);

	printf("%d + %d = %d", num1, num2, num1 + num2);

}