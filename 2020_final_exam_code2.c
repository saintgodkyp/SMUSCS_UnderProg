#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int score, total, avg;	// 점수, 총합, 평균
	int n;			// 학번 끝자리가 홀수인 학생의 수
	int i;

	srand(time(NULL));		// 랜덤 초기화
	
	/**** total과 n 초기화 ****/

	/**** 반복문 ****/ {
  
		/**** 조건문 ****/ {
			score = rand() % 101;

			/**** total 계산 ****/

			/**** n 계산 ****/
		} 
	}
	printf("\n");

	/**** avg 계산 ****/

	printf("Total = %d, Avg = %d\n", total, avg);
	return 0;
}
