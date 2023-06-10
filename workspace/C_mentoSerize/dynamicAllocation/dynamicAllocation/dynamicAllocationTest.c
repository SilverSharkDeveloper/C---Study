#include<stdio.h>
#include<stdlib.h>

void main() {
	int* adr = 0;   //주소값의 초기화 = 0
	adr = (int*)malloc(sizeof(int) * 5);       //5칸의 동적 배열 할당해 그 주소값을 adr에 저장
	printf("%d\n", adr[0]);      //->직접 선언해주지 않아서 쓰레기값이 들어가있다.
	free(adr);							//동적 메모리 해제

	int* adr2 = (int*)calloc(5, sizeof(int));     //5칸의 동적 배열 할당 및 초기화
	printf("%d\n", adr2[0]);                      //자동 초기화로 0이 들어있음
	adr2[0] = 2;
	printf("%d\n", adr2[0]);                      //2
	//free(adr2) ->해제할 경우 뒤에서 adr2를 사용할 수 없음 
	
	adr2 = (int*)realloc(adr2, sizeof(int) * 8); // 5칸 동적 배열을 8칸으로 늘려서 저장
	
	for (int i = 0; i < 8; i++) {
		printf("%d\n", adr2[i]);		//이미 있던 동적 배열에 값은 그대로 가지고 칸수만 늘려준 후 나머지 값은 초기화 되지 않는다.
	}
	
	free(adr2);



}