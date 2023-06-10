#include<stdio.h>

void main() {
	char data = 65;
	
	//자동 형변환
	printf("%d\n", 11 / 9);
	printf("%lf\n", 11.0 / 9);

	//강제 형변환
	printf("%lf\n", 11 / (double)9);

	printf("%c\n", data);
}