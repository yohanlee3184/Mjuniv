#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14
int main_02(void) {
	
	float r = 0;
	float area;
	float round;

	printf("반지름을 입력하시오:");
	scanf("%f",&r);

	area = PI * r * r;
	round = PI * r * 2;

	printf("원의 면적: %f\n", area);
	printf("원의 둘레: %f\n", round);


	return 0;
}