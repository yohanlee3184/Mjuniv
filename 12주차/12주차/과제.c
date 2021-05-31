#include<stdio.h>
#include<string.h>
#define MAX_COUNT 6
#define MAX_LENGTH 10

int main(void) {

	int i, k;
	char temp[MAX_LENGTH];
	char fruits[MAX_COUNT][MAX_LENGTH] = {
		
		"pineapple",
		
		"banna",
	
		"tomato",
	
		"apple",
	
		"pear",
	
		"avocado"
	};

	printf("정렬 전\n");
	for (k = 0; k < MAX_COUNT; k++)
		printf("%s\n", fruits[k]);

	for (k = 0;k<MAX_COUNT-1; k++) {

		for (i = 0;i<MAX_COUNT-k-1; i++) {
			
			if (strcmp(fruits[i],fruits[i+1])>0) {
				strcpy_s(temp, MAX_LENGTH ,fruits[i]);
				strcpy_s(fruits[i], MAX_LENGTH ,fruits[i+1]);
				strcpy_s(fruits[i+1], MAX_LENGTH ,temp);

			}

		}

	}

	printf("\n정렬 후\n");
	for (k = 0; k < MAX_COUNT; k++)
		printf("%s\n", fruits[k]);


	return 0;
}