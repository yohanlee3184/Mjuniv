#include<stdio.h>

double get_array_avg(int* values, int size);
void print_array(int* values, int size);


int main_01(void) {

	
	int num[] = { 10,20,30,40,50 };
	double result = 0;

	print_array(num, 5);


	result = get_array_avg(num, 5);
	printf("\n배열 원소들의 평균 = %f\n", result);

	return 0;
}

double get_array_avg(int* values, int size) {

	int add = 0;

	for (int i = 0;i<size;i++) {
		
		add += values[i];

	}

	return add / size;
}


void print_array(int* values, int size) {
	printf("[ ");

	for (int i = 0; i < size; i++) {
	
		printf("%d ",values[i]);

	}


	printf("]");
}