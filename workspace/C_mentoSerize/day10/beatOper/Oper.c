#include<stdio.h>

void main() {
	int a = 5 > 10;			//c++���� �񱳿��굵 0�Ǵ� �ٸ� ���̹Ƿ� ��ƮŸ�Կ� ���� �� �ִ�.

	//�� ������ �Է��ϰ� ��� ���ϱ�
	int num1 = 0, num2 = 0, result = 0;
	int condition1 = 0, condition2 = 0;
	char* format = "";
	printf("ù��° ���� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ���� : ");
	scanf_s("%d", &num2);
	condition1 = num1 == num2;
	format = condition1 ? "%s" : "��ū �� : %d";

	printf(format, num1 > num2 ? num1 : condition1 ? "�μ��� �����ϴ�." : num2);

	//printf("��� : %d",result);

}
