#include<stdio.h>
#include<stdlib.h> // 랜덤 넘버 Generation


int main(void) {

	int success_count = 0;
	int result;


	while (success_count<10) {
	
		result = rand() % 2;
		if (result == 1) {
			success_count += 1;	
			printf("자유투 성공 : sucess_count = %d\n", success_count);
		}
		else {
			success_count = 0;
			printf("자유투 실패.. 다시 처음 상태로\n");
		}
	}

	return 0;
}