#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_05(void) {
	int max = 0;
	printf("�ִ밪�� �Է��Ͻÿ�: ");
	scanf("%d", &max);

	for (int i = 1; i <= max; i++)
	{
		printf("%d ", i);
	}

	printf("\n");
	int k;
	for (k = max; k >= 1; k--) {
	
		printf("%d ", k);
	
	}

	int sum = 0;

	for (int j = 0;j<=max;j++) {
		if (j % 2 == 0) continue;
		sum += j;
	}

	printf("\n1���� %d���� ���ڵ��� Ȧ���� ���� %d �Դϴ�.", max, sum);

	return 0;
}