#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

int main_01(void) {
	double r = 0;
	double ex = 0;

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &r);

	ex = PI * r * r;

	printf("���� ������ %lf �Դϴ�.", ex);

	return 0;
}

