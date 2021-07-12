#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_05(void) {
	int max = 0;
	printf("최대값을 입력하시오: ");
	scanf("%d", &max);

	for (int i = 1; i <= max; i++)
	{
		printf("%d ", i);
	}

	printf("\n");
	int k;
	for (k = max; k >= 1; k--) {
	
		printf("%d ", k);
	
	}

	int sum = 0;

	for (int j = 0;j<=max;j++) {
		if (j % 2 == 0) continue;
		sum += j;
	}

	printf("\n1부터 %d까지 숫자들의 홀수의 합은 %d 입니다.", max, sum);

	return 0;
}