#include<stdio.h>

int main() {

	int N[] = { 6,3,1,2,4,5 };
	int M[] = { 1,3,8,9,4 };

	int max = 5;
	int cursor = 0;
	int temp = 0;
	int search[] = { 0,0,0,0,0 };

	while (cursor <= 5) {
		temp = M[cursor];
			for (int i = 0; i < max; i++) {
				if (temp == N[i]) {
					search[cursor] = 1;
					break;
				}
			}
			cursor++;
	}
	printf("%d %d %d %d %d ", search[0], search[1], search[2], search[3], search[4]);

}