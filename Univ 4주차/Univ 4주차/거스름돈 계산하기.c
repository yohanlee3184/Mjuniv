#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
int main_09 (void) {
	int won = 0;
	int pay = 0;
	int ex = 0;
	int f = 0;
	int t = 0;
	int f_ = 0;
	int t_ = 0;

	printf("���� ���� �Է��Ͻÿ�. :");
	scanf("%d", &won);
	printf("����ڰ� �� ���� �Է��Ͻÿ�.:");
	scanf("%d", &pay);
	printf("���� ��: %d:\n",won);
	printf("����ڰ� �� ��: %d\n", pay);

	ex = pay - won;
	f = ex / 5000;
		
	printf("5000�� : %d��\n", f);
	ex = ex - f * 5000;

	t = ex / 1000;
	printf("1000�� : %d��\n", t);
	ex = ex - t * 1000;

	f_ = ex / 500;
	printf("500�� : %d��\n", f_);
	ex = ex - t * 500;

	f_ = ex / 100;
	printf("100�� : %d��\n", t_);



	return 0;
}