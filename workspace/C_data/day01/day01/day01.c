#include<stdio.h>
struct student {
	char name[15];
	int age;
	struct student* link;
};
void main() {
	struct student std1 = { "Lee",40,NULL };
	struct student std2 = { "de",35,NULL };
	struct student std3 = { "sd",18,NULL };

	std1.link = &std2;
	std2.link = &std3;
	//std�� �ڱ� �ڽ��� ����ü�� �����Ѵ� :�ڱ����� ->����Լ�
	
	printf("%s %d", std1.name, std1.age);
	printf("%s %d", std1.link ->name, std1.link ->age);
	
}