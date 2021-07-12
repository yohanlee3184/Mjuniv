#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_03(void) {


	int max = 0;
	printf("최대값을 입력하시오: ");
	scanf("%d",  &max);

	for (int i = 1; i <= max; i++) {

		if (i % 2 == 1)continue;
		printf("%d\n", i);

	}




	return 0; 
}