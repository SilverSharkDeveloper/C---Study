#include<stdio.h>
#include<string.h>
//f(x) = 2x + 1 
int add(int num) {
	return num * 2 + 1;
}
void print10() {
	for (int i = 0; i < 10; i++) {
		printf("%d", i + 1);
	}
}
	int printsum10(){
		int total = 0;
		for (int i = 0; i < 10; i++) {
			total += i + 1;
		}
		return total;
	}

	int printsumn(int n) {
		int total = 0;
		for (int i = 0; i < n; i++) {
			total += i + 1;
		}
		return total;

	}
	int change(int num) {
		return ++num;					//전위형을 써주어야 증가되고 리턴한다, 후위형은 증가안하고 리턴
																							
	}
	int* getMaxMin(int arData[]) {
		int max = arData[0], min = arData[0];
		for (int i = 1; i < 5; i++) {
			max = max > arData[i] ? max : arData[i];
			min = min < arData[i] ? min : arData[i];
		}
		int arr[2] = { max,min };
		return arr;
	}
int main(void) {
	printf("%d",change(5));

	int arData[5] = { 1,2,3,4,5 };
	int* arr= getMaxMin(arData);
	printf("%d %d", arr[0], arr[1]);

	return 0;
}