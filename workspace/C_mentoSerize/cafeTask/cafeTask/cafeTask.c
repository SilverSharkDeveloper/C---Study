#include<stdio.h>
#include<string.h>

int main(void) {
	char title[200] = "���鿩 ���ִ� �����Դϴ�!\n";
	char menuChoice[200] = "1.�߰��ϱ�\n 2.�����ϱ�\n 3.�˻��ϱ�\n 4.�����ϱ�\n 5.��Ϻ���\n 6.������";
	//�޴� �̸� , �޴� ����
	//2���� ���� �迭 = ���ڿ� �迭
	char arName[200][100] = { "", };   //���ڿ� �迭 ->�޴��ޱ�
	int arPrice[200] = { 0, };			//������ �迭 -> ����
	int choice = 0;						//�Է¹��� ���ð�
	char temp[200] = "";				//�߰��� �޴��� �ӽ������� ���� ->�ߺ���Ȯ��������
	int cnt = 0;							//�����־���ϴ� �ݺ�Ƚ�� ->�޴����߰��Ǹ� �����Ǿ��Ѵ�.
	int isDup = 0;							//�޴� �߰��� �ߺ� �޴��� ������ 1�� �������� ����->�ٽ� �ʱ�ȭ���־���Ѵ�.
	int idx = 0;
	
	while (1) {
		printf("%s\n%s", title, menuChoice); //������ ����
		scanf_s("%d", &choice);					//������ �޾� choice�� ����
		if (choice == 6) { break; }				//6�� ���� ������
		
		switch (choice) {								//������������ �б�ó��
		case 1:                                         //�޴� �ߺ��ִ��� ������ �˻��� �߰��ϱ�
			printf("�޴��̸� : \n");                 	//�޴��̸������
			scanf_s("%s", temp, sizeof(temp)); //�޴��̸� �޾� �ӽ������ temp�� ����
			isDup = 0;									//�׻� �޴��̸��� �ް��� �ߺ��� �ֵ� ���� �ߺ�Ȯ�������� 0�����ʱ�ȭ
			for (int i = 0; i < cnt; i++) {        //�߰��� �޴��� Ƚ����ŭ �ݺ������� �ߺ��� �ִ��� �˻� 
				if (!strcmp(temp, arName[i])) {		//�Է¹��� temp�� arName�� ����Ǿ��ִ� ���ڿ� �� 

					isDup = 1;									//������ isDup������ 1����
					break;										//������찡 ������ �ڴ´� �������ʰ� for�� Ż��
				}
			}

			if (isDup) {										//�ߺ����� ������� 
				printf("�̹� �ִ� �޴��Դϴ�.\n");
				break;										//if�� ���ΰ��ִ� ����ġ�� Ż��	
			}
			else {											//�ߺ����� �������
				strcpy_s(arName[cnt], sizeof(arName[cnt]), temp);		//arName cnt ĭ�� �Է¹��� temp ����
				printf("�޴� ���� :\n");												//���ݹ���
				scanf_s("%d", arPrice + cnt);				//���ݹ޾� arPrice�迭�� ���ʴ�� ���� (�ּҰ� ���ٽ� ����)



				cnt++;								//����� ��� cnt�� 1���� ->�ߺ��˻� Ƚ������,arName�� �ε����� ����
			}
			break;
		case 2:	//�����ϱ�
			printf("�����Ͻ� �޴� �̸� : \n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0; idx = 0;					//������ �޴��� �ִ��� �ߺ��˻� �ϱ����� ���� isDup�ʱ�ȭ											
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {

					isDup = 1;                     //�ߺ����� �ִٸ� isDup�� 1����
					idx = i;							//i��° �ε����� ���� �����ϱ� ���� i�� ������ idx������ i����
					break;							//�ߺ��� �ڿ� �� �˻���ϰ� ����
				}

			}

			if (!isDup) {							//isDup=0 �� �ߺ����� ���ٸ�
				printf("�����Ͻ� �޴��� �����ϴ�.\n");
			}
			else {							//�ߺ����� �ִٸ�  :ù��° if ��
				printf("�޴��̸� : ");
				scanf_s("%s", temp, sizeof(temp));
				isDup = 0;									//�׻� �޴��̸��� �ް��� �ߺ��� �ֵ� ���� �ߺ�Ȯ�������� 0�����ʱ�ȭ
				for (int i = 0; i < cnt; i++) {        //�߰��� �޴��� Ƚ����ŭ �ݺ������� �ߺ��� �ִ��� �˻� 
					if (!strcmp(temp, arName[i])) {		//�Է¹��� temp�� arName�� ����Ǿ��ִ� ���ڿ� �� 

						isDup = 1;									//������ isDup������ 1����
						break;										//������찡 ������ �ڴ´� �������ʰ� for�� Ż��
					}
				}
				if (isDup) {
					printf("�ߺ��� �޴��� �����մϴ�\n");
				}
				else {													//�ߺ����� ���ٸ� : �ι�° if�� ���� ���� �޴��� �ߺ����� ���ٸ� �߰��Ѵ�.
					strcpy_s(arName[idx], sizeof(arName[idx]), temp); //���� ���� ���� �ߺ��� ���� �ε��� �迭�� �־���
					printf("�޴� ���� : ");											
					scanf_s("%d", arPrice + idx);								//���� ���� �޾� ������ (�ּ� ���� ����)
					printf("�����Ϸ�\n");
				}

			}
			break;

		case 3://�˻��ϱ�
			printf("�˻��Ͻ� ��ǰ�� : \n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {									//�ߺ��˻�
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					printf("%s :%d�� �Դϴ�.\n", arName[i], arPrice[i]);	//�ߺ����� �ִٸ� �� ���� ����� �ݺ��� Ż��
					break;
				}
			}
			if (!isDup) {					//�ߺ����� �������
				printf("�˻��Ͻ� ��ǰ���� �����ϴ�.\n");
			}
			break;

		case 4://�����ϰ� ����ĭ���ִ� �޴��� ������ �����
			printf("�����Ͻ� �޴� �̸�:\n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;	idx = 0;
			for (int i = 0; i < cnt; i++) {			//������ �޴��� �ִ��� �ߺ��˻�
				if (!strcmp(temp, arName[i])) {		//�ߺ����� �ִٸ� 
					isDup = 1;
					idx = i;
					printf("�޴� ������ �����ϼ̽��ϴ�\n");
					break;
				}
			}
			if (!isDup) {                    //�ߺ����� ���ٸ�
				printf("�����Ͻ� �޴��� �����ϴ�\n");
			}
			else {                           //�ߺ����� �ִٸ�
			
				for (int i = idx; i < cnt-1; i++) {         //�ߺ��� �ɸ� �� ĭ�� �ε��� ���� idx�� cnt ���� ��Ģ�� ã�� �ݺ� Ƚ�� ����
			 
				
				//int i =0 �� �ʱ������ ������� ���
				/*for (int i = 0; i < cnt -(idx+1); i++) {
					strcpy_s(arName[i+idx], sizeof(arName[i+idx]), arName[i + 1+idx]);
					arPrice[i + idx] = arPrice[i + idx + 1];
				}*/

				//�޴� ���� : cnt : �����ϴ� �濡 �ε��� idx : �ݺ���Ƚ��
				//5ĭ          5            1[2��°ĭ]                 3 cnt-(idx+1)
				
				//���Ͱ��� ǥ�� ����� ��Ģ����ã�� �ݺ�Ƚ���� ã��
				
				if (i == 199) {		//���ڹ迭�� 200ĭ�ε� ���� 200��° ĭ�� �����ϰ� 201��° ĭ�� �����Ͽ� ���� 200���� ������
											//�̻��� ���� ������ �� �����Ƿ� idx�� 199�� 200��° ĭ�� �����Ҷ� ���ڿ��� �־��־���ϹǷ�
											//�б�ó���Ͽ� ���ڿ��� �ִ´�.
											
					strcpy_s(arName[i], sizeof(arName[i]), ""); //200��° ĭ�� ������ �� ���ڿ� ����
					arPrice[i] = 0;
				}
				else {				//200��° ĭ ������ ������ ������ĭ ������� 
									
				strcpy_s(arName[i], sizeof(arName[i]), arName[i + 1]);	//�����ϰ���� ĭ�� ���� ���� ĭ�� ���� �����.
				arPrice[i] = arPrice[i + 1];						

				
				}
			}
				*(arName[cnt - 1]) = "";     //������� ���������� �������� �ߺ��Ǿ� ���������Ƿ� �ʱ�ȭ
			     	arPrice[cnt - 1] = 0;
			cnt--;			//�ϳ��� ���� �����ϰ� ������Ƿ� cnt�� �� ���־�� ��Ϻ��� �ϳ��� ���� �پ���!!!!!
								//cnt = �� �޴��� ����
			}
			


			break;


		case 5:						//�޴� ��Ϻ���
			for (int i = 0; i < cnt; i++) {				//�޴���ϰ� ���� �̾� ����ϱ�							
				
				printf("%s : %d��\n", arName[i], arPrice[i]);
			}
			if (cnt == 0) {											//�ƹ��޴� ������ ��ǰ���ٰ� ���
				printf("��ǰ�� �����ϴ�.\n");
			}

			break;

		}

	}
	return 0;
}
//���� : ���� case�� �Ҵ�� ���� �ƴѴٸ��� �Է½� ó���ϴ¹��?