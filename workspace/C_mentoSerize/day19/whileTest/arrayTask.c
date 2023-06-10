#include<stdio.h>
void main() {
	//int arData[10] = { 0, };
	
	/*int arData[100] = { 0, };
	int total = 0;
	for (int i = 0; i < 100;i ++) {
		arData[i] = i + 1;
		if(arData[i]%2==0){
			total += arData[i];
		}
	}
	printf("%d", total);*/
	//char arData[5] = {' ', };
	//for (int i = 0; i < 5; i++) {
	//	//if (i == 2) { continue; }
	//	//arData[i] = 65 + i;
	//	arData[i] = i > 1 ? i + 66 : i + 65;
	//printf("%c",arData[i]);
	//int arData[5] = { 0. };
	//int max = 0, min = 0;
	//for (int i = 0; i < 5; i++) {
	//scanf_s("%d", arData +i);
	//}
	//min = max = arData[0]; 
	//for (int i = 1; i < 5; i++) {
	//	max = arData[i] > max ? arData[i] : max;
	//	min = arData[i] < min ? arData[i] : min;
	//	
	//}
	//
	//
	//printf("¸Æ½º°ª : %d, ¹Î°ª:%d	", max, min);

	char arData[26] = { ' ', };
	for (int i = 0; i < 26; i++) {
		if (i % 2 == 0) {
			arData[i] = i + 97;
		}
		else {
			arData[i] = i + 65;
		}
		printf("%c\n", arData[i]);
	}
	
}