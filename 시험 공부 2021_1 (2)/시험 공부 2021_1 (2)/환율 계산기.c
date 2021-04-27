#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_03(void) {

	int per = 0;
	int won = 0;

	double dollar = 0;

	printf("환율을 입력하시오: ");
	scanf("%d",&per);
	printf("원화 금액을 입력하시오: ");
	scanf("%d",&won);
	dollar = (double)won / (double)per;
	printf("원화 %d원은 %f달러 입니다.",won,dollar);


	return 0;
}
