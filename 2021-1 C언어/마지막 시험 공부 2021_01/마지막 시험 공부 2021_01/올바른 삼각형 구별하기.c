#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_01(void) {
	int a,b,c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�:");
	scanf("%d %d %d", &a, &b, &c);

	if ((a + b > c) && (b + c > a) && (a + c > b)) {

		printf("�ùٸ� �ﰢ��");

	}
	else printf("�ùٸ��� ���� �ﰢ��");


	return 0;
}