#include<stdio.h>

void main() {
	char* qMsg = "당신의 혈액형은?";
	char* choiceMsg = "1.A\n 2.B\n 3.O\n 4.AB";
	char* aMsg = "바보";
	char* bMsg = "천재";
	char* oMsg = "멍충이";
	char* abMsg = "이노무시키";
	char* result = "";
	int choice = 0;

	printf("%s\n%s", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	switch (choice) {
	case 1 :
		result = aMsg;
		break;
	case 2 :
		result = bMsg;
		break;
	case 3 :
		result = oMsg;
		break;
	case 4 :
		result = abMsg;
		break;
	default :
		result = "잘못입력하셨습니다.";
	}

	printf("%s", result);

}