//외부 또는 내부 파일을 현재 파일에 포함시킬 수 있는 명령어 ->#include
#include<stdio.h>

//실행 파일을 만들어주는 함수
//이안에 코드를 작성하면 된다.
void main() {
	//컴파일 단축기 : ctrl + f5
	//printf("한동석");
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



}