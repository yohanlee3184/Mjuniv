#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE_N 100

int main(void) {

	srand((unsigned)time(NULL));
	int i,j = 0;
	int temp = 0;
	int numbers[SIZE_N];

	for (i=0 ; i < SIZE_N; i++) {
	
		numbers[i] = rand() % 100;
	
	}
	
	printf("정렬 전\n");

	for (i = 0; i < SIZE_N; i++) {
	
		printf("%d\n" ,numbers[i]);
	}

	for (i = 0; i < SIZE_N - 1; i++) {
	for(j=0;j<SIZE_N-1-i;j++)
		if (numbers[j] > numbers[j + 1]) {
			temp = numbers[j];
			numbers[j] = numbers[j + 1];
			numbers[j + 1] = temp;
		
		}
	
	}
	printf("정렬 후\n");

	for (i = 0; i < SIZE_N; i++) {

		printf("%d\n", numbers[i]);
	}


	return 0;
}