#include<stdio.h>

void main() {
	//두정수를 입력받고 대소 비교하기
	int num1 = 0, num2 = 0;
	char* n1Msg = "첫번째 정수 :";
	char* n2Msg = "두번째 정수 :";
	
	printf("%s", n1Msg);
	scanf_s("%d", &num1);
	printf("%s", n2Msg);
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("큰 값 : %d", num1);
	}
	else if (num1 < num2) {				//num1 >num2 조건식이 거짓이므로 
													//	num1 과 num2가 같지 않다면 num2가 큰값이다. 
													//조건식을 num1 != num2라해도 결과가 같다.
		printf("큰 값 : %d", num2);

	}
	else {
		printf("두수가 같습니다.");
	}


}