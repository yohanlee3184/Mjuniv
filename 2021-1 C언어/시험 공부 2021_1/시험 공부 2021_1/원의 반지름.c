#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

int main_01(void) {
	double r = 0;
	double ex = 0;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &r);

	ex = PI * r * r;

	printf("원의 면적은 %lf 입니다.", ex);

	return 0;
}

