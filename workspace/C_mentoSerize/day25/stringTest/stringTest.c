#include<stdio.h>
#include<string.h>
void main() {
	int gugudan[9][9] = { 0, };
	for (int i = 0; i < 81; i++) {
		gugudan[i / 9][i % 9] = (i / 9 + 1) * (i % 9 + 1);
		printf("%d\n", gugudan[i / 9][i % 9]);

	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
			printf("%d\n", gugudan[i][j]);
		}
	}
}