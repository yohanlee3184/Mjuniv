#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_02(void) {

	srand((unsigned)time(NULL));//���� �ð� �� ȣ��

	int number[10];
	int i;
	int max = 0;

	for (i = 0; i < 10; i++) {
		number[i] = rand() % 100;
		printf("%d ", number[i]);
	}

	for (i = 0; i < 10; i++)	{
		if (number[i] > max)
			max = number[i];
	}
	printf("\n�ִ밪�� %d�Դϴ�.", max);

	return 0;
}