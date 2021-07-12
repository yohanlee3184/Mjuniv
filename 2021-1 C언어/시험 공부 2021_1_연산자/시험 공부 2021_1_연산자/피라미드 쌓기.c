#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num = 0;

	while (!((num % 2 == 1) && (num >= 5))) {
		num = 0;
		printf("층수를 입력해주세요 (홀수) : ");
		scanf("%d", &num);
		
		if (!(num % 2 == 1)) {
			printf("층수는 홀수여야 합니다, 입력한 수 %d\n", num);
			continue;
		}
		else if (num < 5) {
			printf("층수는 5층 이상이어야 합니다.\n");
		}

	}

	for (int k = 0; k < num; k++) {
		for (int i = 0; i <= k; i++) {

			printf("*");
		}
		printf("\n");
	}

	int c = 0;

	for (int k_01 = 0; k_01 < num; k_01++) {
		
		for (c = num-1; c > k_01; c--) {
		
			printf(" ");
		}
		
		for (int i_01 = 0; i_01 <= k_01; i_01++) {

			printf("*");
		}
		printf("\n");
	}




	return 0;
}