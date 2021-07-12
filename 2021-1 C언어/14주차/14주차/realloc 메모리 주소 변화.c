#include<stdio.h>

int main_3(void) {
	int* array = NULL;
	int size = 5;

	array = (int*)realloc(NULL, size * sizeof(int));

	printf("[Expand]\n");
	printf("old-%u\n",array);
	array = (int*)realloc(array, 2*size * sizeof(int));
	printf("new-%u\n", array);

	printf("[Shrink]\n");
	printf("old-%u\n", array);

	array = (int*)realloc(array, (size/2) * sizeof(int));
	printf("new-%u\n", array);


}