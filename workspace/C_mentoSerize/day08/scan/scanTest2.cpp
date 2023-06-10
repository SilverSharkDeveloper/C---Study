#include<stdio.h>

void main() {
	//나이 키 몸무게 입력받기
	int age = 0;
	double height = 0.0, weight = 0.0;

	printf("나이 :");
	scanf_s("%d", &age);

	
	printf("키 :");
	scanf_s("%lf", &height);

	printf("몸무게 :");
	scanf_s("%lf", &weight);

	printf("제 나이는 %d 이고 몸무게는 %.2lf 이고 키는 %.2lf 입니다", age, weight, height);
}