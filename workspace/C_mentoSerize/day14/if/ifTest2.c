#include<stdio.h>

void main() {
	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n 2.B\n 3.O\n 4.AB";
	char* aMsg = "�ٺ�";
	char* bMsg = "õ��";
	char* oMsg = "������";
	char* abMsg = "�̳빫��Ű";
	char* result = "";
	int choice = 0;

	printf("%s\n%s", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	/*result = choice == 1 ? aMsg : choice == 2 ? bMsg : choice == 3 ? oMsg :
		choice == 4 ? abMsg : "�߸� �Է� �ϼ̽��ϴ�.";*/
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
		result = "�߸��Է��ϼ̽��ϴ�.";
	}
	printf("%s", result);

}