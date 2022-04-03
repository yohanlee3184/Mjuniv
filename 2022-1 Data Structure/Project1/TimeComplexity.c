#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main_01(void) {

	int sum=0 ;
	clock_t start, finish;
	double duration;
	start = clock();

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++)
			{
				sum++;
			}

		}
	}

	finish = clock();
	printf("%d\n", sum);
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초 입니다.\n", duration);
}

