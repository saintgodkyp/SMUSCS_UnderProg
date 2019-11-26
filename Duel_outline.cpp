#define _CRT_SECURE_NO_WARNINGS
#define _CRT_OBSOLETE_NO_WARNINGS    
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
---------------------------------------
Simple duel program based on random number
---------------------------------------
Incomplete code for the class, Understanding programming
	Written by ypkim@semyung.ac.kr
	School of Computer Science, Semyung University 

Required rule:
	Actions: Attack, Defense
	Action point range: 10-100
	Bonus action probability: 20%  
*/

/*------------------------------------------------
	아래 main 함수의 주석중 **** 표시된 부분에 
	필요한 C코드를 작성하여 완성하시오.
--------------------------------------------------*/

int main()
{
	// 필요한 변수 선언 및 초기화
	int usr_act, com_act;			// 사용자 행동, 컴퓨터 행동
	int usr_hp, com_hp;			// 사용자 체력, 컴퓨터 체력
	int round = 0;					// 라운드
	int usr_ap, com_ap;			// 사용자 행동포인트, 컴퓨터 행동포인트
	int usr_bonus;  					// 사용자 보너스 (보너스 문제 처리 시)
	const int MAX_HP = 250;	// 최대 체력 값
	
	// 랜덤 초기화
	// ****

	// 체력값 초기화
	usr_hp = com_hp = MAX_HP;
	printf("결투 시뮬레이션 시작\n");

	// 반복문 시작
	// 종료 조건은 사용자 또는 컴퓨터 체력이 0 이하일때
	// ****
	{
		printf("행동을 고르시오. (0=공격, 1=방어) \n");
		//scanf usr_act 입력
		// scanf(****)

		printf("컴퓨터 선택 중..");
		// 컴퓨터 행동 랜덤하게 선택하여 com_act에 저장
		// com_act = ****
		
		_sleep(1000);	// 1초 딜레이
		printf("완료!\n");

		// 라운드 값 증가시키며 메시지 출력: "라운드 XX 시작!"
		// printf(****)

		// 사용자와 컴퓨터 액션 포인트 랜덤 생성 (10 - 100)
		// usr_ap = ****
		// com_ap = ****

		// 둘다 같은 행동을 했을 때
		// if (****)
		{
			// 둘 다 공격인 경우
			// if (****) 
			{	
				printf("둘다 공격함\n");
				// 서로 상대방의 체력 ap만큼 감소시킴
				// com_hp = ****
				// usr_hp = ****
			}
			// 둘다 방어인 경우
			//else 
			{	
				printf("둘다 방어함.\n");
			}
		}
		// 나만 공격 했을 때, 컴퓨터는 방어
		// else if (****) 
		{	
			// 사용자의 액션 포인트가 컴퓨터 보다 큰 경우,
			// if (****) 
			{
				// 컴퓨터의 체력을 액션 ap 차이 만큼 감소시키고 메시지 출력: "내 공격 XX 성공!"
				// com_hp = ****
				// printf(****)
			}
			else {
				printf("내 공격 방어됨\n");
			}
		}
		// 나는 방어하고, 컴퓨터만 공격했을때
		else {	
			// 컴퓨터의 액션 포인트가 사용자보다 큰 경우,
			// if (****) 
			{
				// 사용자 체력 액션 ap 차이만큼 감소 시키고 메시지 출력: "컴퓨터 공격 XX 성공!"
				// usr_hp ****
				// printf(****)
			}
			else {
				printf("컴퓨터 공격 방어됨\n");
			}
		}

		// 보너스 처리
		// usr_bonus = ****
		// if (****) {
		// }
    
		printf("%d 라운드 결과: ", round);
		printf("남은 체력: 사용자 %d, 컴퓨터 %d\n", usr_hp, com_hp);
	} // 반목문 종료  

	// 체력이 남은 YY에 대해서 라운드와 메시지 출력: "XX 라운드만에 YY 승리!"
	// printf(****)

	return 0;
}
