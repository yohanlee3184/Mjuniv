#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_03(void) {


	int max = 0;
	printf("�ִ밪�� �Է��Ͻÿ�: ");
	scanf("%d",  &max);

	for (int i = 1; i <= max; i++) {

		if (i % 2 == 1)continue;
		printf("%d\n", i);

	}




	return 0; 
}