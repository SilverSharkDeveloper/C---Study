#include<stdio.h>
#include<stdlib.h>

void main() {
	int* adr = 0;   //�ּҰ��� �ʱ�ȭ = 0
	adr = (int*)malloc(sizeof(int) * 5);       //5ĭ�� ���� �迭 �Ҵ��� �� �ּҰ��� adr�� ����
	printf("%d\n", adr[0]);      //->���� ���������� �ʾƼ� �����Ⱚ�� ���ִ�.
	free(adr);							//���� �޸� ����

	int* adr2 = (int*)calloc(5, sizeof(int));     //5ĭ�� ���� �迭 �Ҵ� �� �ʱ�ȭ
	printf("%d\n", adr2[0]);                      //�ڵ� �ʱ�ȭ�� 0�� �������
	adr2[0] = 2;
	printf("%d\n", adr2[0]);                      //2
	//free(adr2) ->������ ��� �ڿ��� adr2�� ����� �� ���� 
	
	adr2 = (int*)realloc(adr2, sizeof(int) * 8); // 5ĭ ���� �迭�� 8ĭ���� �÷��� ����
	
	for (int i = 0; i < 8; i++) {
		printf("%d\n", adr2[i]);		//�̹� �ִ� ���� �迭�� ���� �״�� ������ ĭ���� �÷��� �� ������ ���� �ʱ�ȭ ���� �ʴ´�.
	}
	
	free(adr2);



}