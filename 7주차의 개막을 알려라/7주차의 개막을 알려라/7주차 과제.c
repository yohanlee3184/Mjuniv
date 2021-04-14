#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int guess = 0;
	int answer = 0;
	unsigned int try_count = 0;

	srand((unsigned)time(NULL));//현재 시간 값 호출

		answer = rand() % 100;

		do
		{
			printf("정답을 추측하여 보시오 : ");
			scanf("%d", &guess);

			if (guess < answer) {
				printf("제시한 정수가 작습니다.\n");
			}
			else if (guess > answer) {
				printf("제시한 정수가 큽니다.\n");
			
			}
			try_count++;
		}
		while(guess != answer);

		printf("축하합니다. 시도 횟수 = %d\n", try_count);
	return 0;
}