#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num = 0;

	while (!((num % 2 == 1) && (num >= 5))) {
		num = 0;
		printf("������ �Է����ּ��� (Ȧ��) : ");
		scanf("%d", &num);
		
		if (!(num % 2 == 1)) {
			printf("������ Ȧ������ �մϴ�, �Է��� �� %d\n", num);
			continue;
		}
		else if (num < 5) {
			printf("������ 5�� �̻��̾�� �մϴ�.\n");
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