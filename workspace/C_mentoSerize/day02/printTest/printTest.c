//�ܺ� �Ǵ� ���� ������ ���� ���Ͽ� ���Խ�ų �� �ִ� ��ɾ� ->#include
#include<stdio.h>

//���� ������ ������ִ� �Լ�
//�̾ȿ� �ڵ带 �ۼ��ϸ� �ȴ�.
void main() {
	//������ ����� : ctrl + f5
	//printf("�ѵ���");
	int x = 10;
	long l = 10L;
	char c = 'a';
	float f = 3.9;
	double d = 3.9;
	char* str = "ABC";

	//sizeof(�ڷ���) : �Ұ�ȣ �ȿ� �ۼ��� ���� �Ǵ� �ڷ����� ũ�⸦ �˷��ִ� �Լ��̴�.
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(str));



}