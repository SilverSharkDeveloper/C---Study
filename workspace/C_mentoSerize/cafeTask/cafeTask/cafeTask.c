#include<stdio.h>
#include<string.h>

int main(void) {
	char title[200] = "공들여 맛있는 공차입니다!\n";
	char menuChoice[200] = "1.추가하기\n 2.수정하기\n 3.검색하기\n 4.삭제하기\n 5.목록보기\n 6.나가기";
	//메뉴 이름 , 메뉴 가격
	//2차원 문자 배열 = 문자열 배열
	char arName[200][100] = { "", };   //문자열 배열 ->메뉴받기
	int arPrice[200] = { 0, };			//정수값 배열 -> 가격
	int choice = 0;						//입력받은 선택값
	char temp[200] = "";				//추가할 메뉴를 임시저장할 변수 ->중복값확인을위해
	int cnt = 0;							//비교해주어야하는 반복횟수 ->메뉴가추가되면 증가되야한다.
	int isDup = 0;							//메뉴 추가시 중복 메뉴가 있을때 1로 변경해줄 변수->다시 초기화해주어야한다.
	int idx = 0;
	
	while (1) {
		printf("%s\n%s", title, menuChoice); //선택지 묻기
		scanf_s("%d", &choice);					//선택지 받아 choice에 저장
		if (choice == 6) { break; }				//6번 고르면 끝내기
		
		switch (choice) {								//선택지에따른 분기처리
		case 1:                                         //메뉴 중복있는지 없는지 검사후 추가하기
			printf("메뉴이름 : \n");                 	//메뉴이름물어보기
			scanf_s("%s", temp, sizeof(temp)); //메뉴이름 받아 임시저장소 temp에 저장
			isDup = 0;									//항상 메뉴이름을 받고나서 중복이 있든 없든 중복확인을위해 0으로초기화
			for (int i = 0; i < cnt; i++) {        //추가한 메뉴의 횟수만큼 반복문으로 중복이 있는지 검사 
				if (!strcmp(temp, arName[i])) {		//입력받은 temp와 arName에 저장되어있는 문자열 비교 

					isDup = 1;									//같을시 isDup변수에 1저장
					break;										//같은경우가 있을시 뒤는더 비교하지않고 for문 탈출
				}
			}

			if (isDup) {										//중복값이 있을경우 
				printf("이미 있는 메뉴입니다.\n");
				break;										//if를 감싸고있는 스위치문 탈출	
			}
			else {											//중복값이 없을경우
				strcpy_s(arName[cnt], sizeof(arName[cnt]), temp);		//arName cnt 칸에 입력받은 temp 저장
				printf("메뉴 가격 :\n");												//가격묻기
				scanf_s("%d", arPrice + cnt);				//가격받아 arPrice배열에 차례대로 저장 (주소값 접근시 주의)



				cnt++;								//저장된 경우 cnt값 1증가 ->중복검사 횟수증가,arName의 인덱스값 증가
			}
			break;
		case 2:	//수정하기
			printf("수정하실 메뉴 이름 : \n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0; idx = 0;					//수정할 메뉴가 있는지 중복검사 하기위한 변수 isDup초기화											
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {

					isDup = 1;                     //중복값이 있다면 isDup에 1저장
					idx = i;							//i번째 인덱스에 값을 수정하기 위해 i를 저장할 idx변수에 i저장
					break;							//중복시 뒤에 더 검사안하고 종료
				}

			}

			if (!isDup) {							//isDup=0 즉 중복값이 없다면
				printf("수정하실 메뉴가 없습니다.\n");
			}
			else {							//중복값이 있다면  :첫번째 if 문
				printf("메뉴이름 : ");
				scanf_s("%s", temp, sizeof(temp));
				isDup = 0;									//항상 메뉴이름을 받고나서 중복이 있든 없든 중복확인을위해 0으로초기화
				for (int i = 0; i < cnt; i++) {        //추가한 메뉴의 횟수만큼 반복문으로 중복이 있는지 검사 
					if (!strcmp(temp, arName[i])) {		//입력받은 temp와 arName에 저장되어있는 문자열 비교 

						isDup = 1;									//같을시 isDup변수에 1저장
						break;										//같은경우가 있을시 뒤는더 비교하지않고 for문 탈출
					}
				}
				if (isDup) {
					printf("중복된 메뉴가 존재합니다\n");
				}
				else {													//중복값이 없다면 : 두번째 if문 새로 받은 메뉴가 중복값이 없다면 추가한다.
					strcpy_s(arName[idx], sizeof(arName[idx]), temp); //새로 받은 값을 중복된 값의 인덱스 배열에 넣어줌
					printf("메뉴 가격 : ");											
					scanf_s("%d", arPrice + idx);								//가격 또한 받아 수정함 (주소 접근 유의)
					printf("수정완료\n");
				}

			}
			break;

		case 3://검색하기
			printf("검색하실 상품명 : \n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {									//중복검사
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					printf("%s :%d원 입니다.\n", arName[i], arPrice[i]);	//중복값이 있다면 그 값을 출력후 반복문 탈출
					break;
				}
			}
			if (!isDup) {					//중복값이 없을경우
				printf("검색하실 상품명이 없습니다.\n");
			}
			break;

		case 4://삭제하고 다음칸에있는 메뉴는 앞으로 덮어쓰기
			printf("삭제하실 메뉴 이름:\n");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;	idx = 0;
			for (int i = 0; i < cnt; i++) {			//삭제할 메뉴가 있는지 중복검사
				if (!strcmp(temp, arName[i])) {		//중복값이 있다면 
					isDup = 1;
					idx = i;
					printf("메뉴 삭제에 성공하셨습니다\n");
					break;
				}
			}
			if (!isDup) {                    //중복값이 없다면
				printf("삭제하실 메뉴가 없습니다\n");
			}
			else {                           //중복값이 있다면
			
				for (int i = idx; i < cnt-1; i++) {         //중복이 걸린 그 칸에 인덱스 값인 idx와 cnt 간에 규칙을 찾아 반복 횟수 설정
			 
				
				//int i =0 을 초기식으로 쓰고싶은 경우
				/*for (int i = 0; i < cnt -(idx+1); i++) {
					strcpy_s(arName[i+idx], sizeof(arName[i+idx]), arName[i + 1+idx]);
					arPrice[i + idx] = arPrice[i + idx + 1];
				}*/

				//메뉴 개수 : cnt : 삭제하는 방에 인덱스 idx : 반복문횟수
				//5칸          5            1[2번째칸]                 3 cnt-(idx+1)
				
				//위와같이 표를 만들어 규칙성을찾아 반복횟수를 찾음
				
				if (i == 199) {		//문자배열이 200칸인데 만약 200번째 칸을 삭제하고 201번째 칸에 접근하여 값을 200번에 넣으면
											//이상한 값을 가져올 수 있으므로 idx가 199즉 200번째 칸을 삭제할땐 빈문자열을 넣어주어야하므로
											//분기처리하여 빈문자열을 넣는다.
											
					strcpy_s(arName[i], sizeof(arName[i]), ""); //200번째 칸을 삭제후 빈 문자열 삽입
					arPrice[i] = 0;
				}
				else {				//200번째 칸 삭제를 제외한 나머지칸 삭제경우 
									
				strcpy_s(arName[i], sizeof(arName[i]), arName[i + 1]);	//삭제하고싶은 칸에 값을 다음 칸에 값을 덮어쓴다.
				arPrice[i] = arPrice[i + 1];						

				
				}
			}
				*(arName[cnt - 1]) = "";     //덮어쓰더라도 마지막값은 삭제없이 중복되어 남아있으므로 초기화
			     	arPrice[cnt - 1] = 0;
			cnt--;			//하나의 값을 삭제하고 당겼으므로 cnt를 꼭 빼주어야 목록볼때 하나의 값이 줄어든다!!!!!
								//cnt = 총 메뉴의 갯수
			}
			


			break;


		case 5:						//메뉴 목록보기
			for (int i = 0; i < cnt; i++) {				//메뉴목록과 가격 뽑아 출력하기							
				
				printf("%s : %d원\n", arName[i], arPrice[i]);
			}
			if (cnt == 0) {											//아무메뉴 없으면 상품없다고 출력
				printf("상품이 없습니다.\n");
			}

			break;

		}

	}
	return 0;
}
//질문 : 만약 case에 할당된 값이 아닌다른값 입력시 처리하는방법?