#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_01(void) {

	int i;
	int scores[5];
	int sum = 0;
	for (i = 0;i<5;i++) {
		printf("�л����� ������ �Է��Ͻÿ�:");
		scanf("%d" ,& scores[i]);
		sum += scores[i];
	
	}

	printf("���� ��� = %d", sum / 5);


	return 0;
}