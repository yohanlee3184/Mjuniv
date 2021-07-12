#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_01(void) {

	int i;
	int scores[5];
	int sum = 0;
	for (i = 0;i<5;i++) {
		printf("학생들의 성적을 입력하시오:");
		scanf("%d" ,& scores[i]);
		sum += scores[i];
	
	}

	printf("성적 평균 = %d", sum / 5);


	return 0;
}