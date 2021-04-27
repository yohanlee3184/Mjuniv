#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_02(void) {

	srand((unsigned)time(NULL));//현재 시간 값 호출

	int number[10];
	int i;
	int max = 0;

	for (i = 0; i < 10; i++) {
		number[i] = rand() % 100;
		printf("%d ", number[i]);
	}

	for (i = 0; i < 10; i++)	{
		if (number[i] > max)
			max = number[i];
	}
	printf("\n최대값은 %d입니다.", max);

	return 0;
}