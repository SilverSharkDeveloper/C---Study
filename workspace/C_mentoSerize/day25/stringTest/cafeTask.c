#include<stdio.h>
#include<string.h>

void main() {
	char title [200] = "어서오세요 공차입니다";
	char menuChoice[200] = "1.추가하기\n 2.수정하기\n 3.검색하기\n 4.삭제하기\n 5.목록보기\n 6.나가기";
	//메뉴 이름 , 메뉴 가격
	//2차원 문자 배열 = 문자열 배열
	char arName[200][100] = {"",};
	int arPrice[200] = { 0, };
	int choice = 0;	
	char temp[200] = "";
	int cnt =0 ;
	int isDup = 0;
	while (1) {
		printf("%s\n%s", title, menuChoice);
		scanf_s("%d", &choice);
		if (choice == 6) { break; }
		switch (choice) {
		case 1 ://메뉴 중복있는지 없는지 검사후 추가하기
			printf("메뉴이름 : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					
					isDup = 1;
				}
			}

			if (isDup) {
				printf("이미 있는 메뉴입니다.\n");
				break;
			}
			else {
				strcpy_s(arName[cnt], sizeof(arName[cnt], temp));
			cnt++;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;

		}
			
	}
	
}