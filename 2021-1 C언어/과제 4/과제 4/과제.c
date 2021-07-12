#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort_arr(int* arr, int size_arr);

void merge(int* A, int* B, int* C, int size_arr);

int main(void) {

	srand((unsigned)time(NULL));



	int a[5] ;
	int b[5] ;
	int c[10] ;

	for (int i = 0; i < 5; i++) {

		a[i] = rand() % 10;
		b[i] = rand() % 10;
	}
		

		printf("Unsorted A[]=%d %d %d %d %d \n" , a[0], a[1],a[2],a[3],a[4]);
		sort_arr(a, 5);
		printf("Sorted A[]=%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);

		printf("Unsorted B[]=%d %d %d %d %d \n", b[0], b[1], b[2], b[3], b[4]);
		sort_arr(b, 5);
		printf("Sorted B[]=%d %d %d %d %d \n", b[0], b[1], b[2], b[3], b[4]);

		merge(a, b, c, 5);
		sort_arr(c, 10);

		printf("C[]=%d %d %d %d %d %d %d %d %d %d ", c[0], c[1], c[2], c[3], c[4],c[5],c[6],c[7],c[8],c[9]);

		return 0;
	
	}



void sort_arr(int *arr, int size_arr) {
	
	int i, j, temp;

	for (i = 0; i <size_arr-1; i++) {
		
		for (j = 0; j < size_arr-1-i; j++) {
			
			if (arr[j] > arr[j + 1]) {

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}

		}

	}

}



void merge(int* A, int* B, int* C, int size_arr){

	for (int i = 0; i < size_arr; i++)
	{
		C[i] = A[i];

		C[i + 5] = B[i];
	}

}