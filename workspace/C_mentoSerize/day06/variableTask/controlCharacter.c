#include<stdio.h>

void main() {
	//애완동물 정보
	char* name = "고양이";
	int age = 3;
	char gender = 'M';
	float weight = 6.3;

	//제어문자 - 반드시 따옴표 안에서 작성한다. 서식문자도 마찬가지
	// \n : new line(줄바꿈)
	//\t : tab (위아래 줄간격 맞추어 띄기)
	// \(\,",') 큰따옴표 안에 각각 기호 표시
	puts(name);
	//문자열 출력, 마지막에는 줄바꿈 자동
	
}