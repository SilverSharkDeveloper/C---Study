#include<stdio.h>

void main() {
	//���� Ű ������ �Է¹ޱ�
	int age = 0;
	double height = 0.0, weight = 0.0;

	printf("���� :");
	scanf_s("%d", &age);

	
	printf("Ű :");
	scanf_s("%lf", &height);

	printf("������ :");
	scanf_s("%lf", &weight);

	printf("�� ���̴� %d �̰� �����Դ� %.2lf �̰� Ű�� %.2lf �Դϴ�", age, weight, height);
}