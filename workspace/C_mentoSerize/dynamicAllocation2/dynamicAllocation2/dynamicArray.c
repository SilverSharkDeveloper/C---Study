#include<stdio.h>
#include<stdlib.h>

void getMaxMin(int* f_arr, int size, int* max, int* min) {
	*max = f_arr[0];
	*min = f_arr[0];
	for (int i = 1; i < size; i++) {
		if (*max < f_arr[i]) { *max = f_arr[i]; }
		if (*min > f_arr[i]) { *min = f_arr[i]; }
	}
}

void main() {
	//����ڰ� �Է��Ѹ�ŭ�� ĭ��
	int choice = 0;
	int max = 0;
	int min = 0;
	printf("��ĭ¥��?");
	scanf_s("%d", &choice);
	int* userAr = (int*)calloc(choice,sizeof(int));
	
	for (int i = 0; i < choice; i++) {
		printf("%d ��° ����", i + 1);
		scanf_s("%d", userAr + i);
	}
	getMaxMin(userAr, choice, &max, &min);
	printf("%d %d", max, min);


	
}