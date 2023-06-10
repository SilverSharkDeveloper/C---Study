#include<stdio.h>

void main() {
	int a = 5 > 10;			//c++에선 비교연산도 0또는 다른 값이므로 인트타입에 담을 수 있다.

	//두 정수를 입력하고 대소 비교하기
	int num1 = 0, num2 = 0, result = 0;
	int condition1 = 0, condition2 = 0;
	char* format = "";
	printf("첫번째 정수 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수 : ");
	scanf_s("%d", &num2);
	condition1 = num1 == num2;
	format = condition1 ? "%s" : "더큰 값 : %d";

	printf(format, num1 > num2 ? num1 : condition1 ? "두수가 같습니다." : num2);

	//printf("결과 : %d",result);

}
