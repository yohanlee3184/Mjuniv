#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_03(void) {

	int per = 0;
	int won = 0;

	double dollar = 0;

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%d",&per);
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d",&won);
	dollar = (double)won / (double)per;
	printf("��ȭ %d���� %f�޷� �Դϴ�.",won,dollar);


	return 0;
}
