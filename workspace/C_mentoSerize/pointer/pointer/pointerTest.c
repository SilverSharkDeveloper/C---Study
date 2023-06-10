#include<stdio.h>

void getMaxMin(int arData[] ,int* max,int*min) {        
	for (int i = 1; i < 5; i++) {
		*max = arData[0];
		*min = arData[0];
		*max = *max > arData[i] ? *max : arData[i];
		*min = *min < arData[i] ? *min : arData[i];
	}
                                      
}
int main(void) {
	int max = 0, min = 0;
	int arData[5] = { 1,2,3,4,5 };
	getMaxMin(arData, &max, &min);   //배열과 최댓값,최솟값을 넣을 변수의 주소값을 전달
	printf("%d, %d", max, min);    
	


	return 0;
}
