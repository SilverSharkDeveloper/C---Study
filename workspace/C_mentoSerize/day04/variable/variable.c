#include<stdio.h>
void main() {
	int x = 10;
	long l = 10L;
	char c = 'a';
	float f = 3.9;
	double d = 3.9;
	char* str = "ABC";

	//sizeof(자료형) : 소괄호 안에 작성한 변수 또는 자료형의 크기를 알려주는 함수이다.
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(str));

	//ctrl + shift + / 한줄주석,해제
}