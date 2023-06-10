#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct 

void insert(ArrayList*pList, int pos, int pData) {
	for (int i = currentCount - 1, i >= pos; i--) {
		pList->pData[i + 1] = pList->pData[i];
		}
	pList->pData[pos] = pData;
	currentcount++;
}


void delete(ArrayList* pList, int pos) {
	for (int i = pos; i < currentCount - 1; i++) {
		pList->pData[i] = pList->pData[i + 1];
		}
	currentCount--;
}

void main() {
	
}

