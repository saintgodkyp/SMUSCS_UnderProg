/*
 * 세명대학교 프로그래밍의 이해 
 * 2020년 2학기 기말고사 문제용 코드
 * 작성: ypkim@semyung.ac.kr
 * 환경: Visual studio 2019
 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>  

/* 정상 동작: 

0~9 사이의 숫자 2개와 덧셈 혹은 뺄셈으로 구성된 문제를 랜덤하게 내고, 
입력한 답이 정답이면 문제 제출과 입력을 반복, 
오답이면 중단하고 점수를 출력한다. 
정답일때 점수는 10점씩 가산된다. 

*/

int main() {
// 여기부터 -------------------------------------------------------
    int num[2] = { 0 };	// 입력할 두 숫자
    char opr;
    int answer = 0, your_answer = 0, total_score = 0;
    srand(time(NULL)); // 난수 초기화
    while ((answer == your_answer)) {
        num[1] = rand() % 10;
        num[2] = rand() % 10;
        opr = rand() % 2;
        if (opr == 0) {	// 정답 생성
            opr = '+';
            answer = num[1] + num[2];
        }
        else {
            opr = '-';
            answer = num[1] - num[2];
        }
        printf("%d %c %d ? ", num[1], opr, num[2]);
        scanf("%d", &your_answer);
        if (answer = your_answer) {  // 정답의 경우
            printf("맞았습니다.\n");
            total_score += 10;
// 여기까지 -------------------------------------------------------
        } else printf("종료: 총점 %d\n", total_score);
    }
    return 0;
}
