#include<stdio.h>

	struct student {
		char name[15];
		int age;
		struct stduent* link;

	};
int main(void) {
	struct student std1 = { "kim",30, NULL };
	struct student std2 = { "lee",30,NULL };
	struct student std3 = { "Park",30,NULL };
	
	std1.link = &std2;
	std2.link = &std3;
	//std�� �ڱ� Ÿ���� ����ü�� �����Ѵ�. �ڱ����� :����Լ�


	printf("%s %d \n", std1.name, std1.age);
	printf("%s %d \n", std1.link->name, std1.link ->age);
	printf("%s %d \n", std2.link->name, std2.link ->age);

	return 0;
}
