#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE_N 100

int main(void) {


	srand((unsigned)time(NULL));
	int number[100];

	int i;
	int j;

	printf("========Unsorted========\n");
	for (i = 0; i < SIZE_N; i++) {
		number[i] = rand() % 100;
		printf("number[%d] = %d\n",i,number[i]);
	}
	for (i=0;i<SIZE_N-1;i++) {
		for (j = 0;j<SIZE_N-1-i;j++) {
			if (number[j] > number[j + 1]) {
				int tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
			}
		}
	}

	printf("========Sorted========\n");
	for (i = 0; i <SIZE_N; i++) {
		printf("number[%d] = %d\n", i, number[i]);
	}

	return 0;
}