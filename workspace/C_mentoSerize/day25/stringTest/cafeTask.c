#include<stdio.h>
#include<string.h>

void main() {
	char title [200] = "������� �����Դϴ�";
	char menuChoice[200] = "1.�߰��ϱ�\n 2.�����ϱ�\n 3.�˻��ϱ�\n 4.�����ϱ�\n 5.��Ϻ���\n 6.������";
	//�޴� �̸� , �޴� ����
	//2���� ���� �迭 = ���ڿ� �迭
	char arName[200][100] = {"",};
	int arPrice[200] = { 0, };
	int choice = 0;	
	char temp[200] = "";
	int cnt =0 ;
	int isDup = 0;
	while (1) {
		printf("%s\n%s", title, menuChoice);
		scanf_s("%d", &choice);
		if (choice == 6) { break; }
		switch (choice) {
		case 1 ://�޴� �ߺ��ִ��� ������ �˻��� �߰��ϱ�
			printf("�޴��̸� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					
					isDup = 1;
				}
			}

			if (isDup) {
				printf("�̹� �ִ� �޴��Դϴ�.\n");
				break;
			}
			else {
				strcpy_s(arName[cnt], sizeof(arName[cnt], temp));
			cnt++;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;

		}
			
	}
	
}