#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void sort_arr(int* arr, int size_arr);

void merge(int* A, int* B, int* C, int size_arr);


int main(void) {

	int a[5];
	int b[5];
	int c[10];

	for (int i = 0; i < 5; i++) {
	
		a[i] = rand() % 10;
		b[i] = rand() % 10;

		c[i] = a[i];
		c[i + 5] = b[i];
	
	}

	return 0;
}


void sort_arr(int* arr, int size_arr) {


}

void merge(int* A, int* B, int* C, int size_arr){


}