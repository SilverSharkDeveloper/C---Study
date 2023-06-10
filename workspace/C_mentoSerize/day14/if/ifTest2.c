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

	/*result = choice == 1 ? aMsg : choice == 2 ? bMsg : choice == 3 ? oMsg :
		choice == 4 ? abMsg : "잘못 입력 하셨습니다.";*/
	if (choice == 1) {
		result = aMsg;
	}
	else if (choice == 2) {
		result = bMsg;
	}
	else if (choice == 3) {
		result = oMsg;

	}
	else if(choice == 4)	{
		result = abMsg;
	}
	else {
		result = "잘못입력하셨습니다.";
	}
	printf("%s", result);

}