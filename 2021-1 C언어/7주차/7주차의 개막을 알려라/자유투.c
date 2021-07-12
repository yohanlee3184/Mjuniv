#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_01(void) {



	int sucess_count = 0, result;

	unsigned int try_count = 0;
	
	srand( (unsigned)time(NULL));//현재 시간 값 호출
	
	while(1){
	//for (;;) {

		result = rand() % 2;

		try_count++;
		
		if (result == 1) {
			sucess_count++;
			printf("자유투 성공: success_count = %d\n", sucess_count);
		}

		else
		{
			sucess_count = 0;
			printf("자유투 실패.. 다시 처음 상태로\n");
		}

		if (sucess_count == 10) {
			break;
		}

	}

	printf("총자유투 시도 횟수는 %d 이다.\n	", try_count);

	return 0;
}

