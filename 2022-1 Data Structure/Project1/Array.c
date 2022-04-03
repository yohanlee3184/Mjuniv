#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, k, j;
	int a[3][3];
	int max;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &k);
			a[i][j] = k;
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("% d", a[i][j]);
			
		}
	}

	max = a[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (max < a[i][j]) { max = a[i][j]; }
		}
	}

	printf("최대 값은 %d", max);

	return 0;
}