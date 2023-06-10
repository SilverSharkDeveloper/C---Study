#include <stdio.h>
void main() {

	/*int a = 0; 
	for (int i = 0; i < 10; i++) {
		printf("%d.허은상	\n", i + 1);
	}

	for (int i = 0; i < 100; i++) {
		printf("%d\n", i + 1);
	}

	for (int i = 100; i > 0; i--) {
		printf("%d\n", i);
	}

	for (int i = 0; i < 100; i += 2) {
		printf("%d\n", i + 2);
	}
	
	for (int i = 0; i < 10;i++) {
		a += i + 1; 
		printf("%d\n", a);
	}

	for (int i = 0; i < 6; i++) {
		printf("%c\n", i+65);
	}*/

	/*for (int i = 0; i < 6; i++) {
		if (i == 1) {
			continue; 
		}
		printf("%c\n", i + 65);

	}
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		temp = i;
		if (i > 0) { temp++; }
		printf("%c\n", 65 + temp);
	}
	for (int i = 0; i < 5; i++) {
	printf("%c\n",	i > 0 ? i + 66 : i + 65);
	}*/
	
	//012012012 --같은수 반복은 나머지연산을 이용한다.
	//0~2라는 범위 ->범위가 보이면 나머지연산 n%a -> 0~a-1까지의 범위가 된다.
	
	/*int temp = 0;
	for (int i = 0; i < 9; i++) {
		printf("%d", i % 3);
	}*/

	for (int i = 0; i < 26; i++) {
		//65 = 'A' . 97 = "a"
		if (i % 2 == 0) {
			printf("%c", i + 97);
		}
		else {
			printf("%c", i + 65);
		}
	}
}