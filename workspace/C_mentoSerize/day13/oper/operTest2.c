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
		result = "�߸��Է��ϼ̽��ϴ�.";
	}

	printf("%s", result);

}