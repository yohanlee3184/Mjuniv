#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14
int main_02(void) {
	
	float r = 0;
	float area;
	float round;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%f",&r);

	area = PI * r * r;
	round = PI * r * 2;

	printf("���� ����: %f\n", area);
	printf("���� �ѷ�: %f\n", round);


	return 0;
}