#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_01(void)
{
	double c = 0;
	double f = 0;
	printf("ȭ���µ��� �Է��Ͻÿ� : ");
	scanf("%lf", &f);
	c = ((double)5 / (double)9) * (f - 32);

	printf("�����µ� = %f", c);
	return 0;
}