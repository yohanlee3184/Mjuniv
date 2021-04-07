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

	printf("물건 값을 입력하시오. :");
	scanf("%d", &won);
	printf("사용자가 낸 돈을 입력하시오.:");
	scanf("%d", &pay);
	printf("물건 값: %d:\n",won);
	printf("사용자가 낸 돈: %d\n", pay);

	ex = pay - won;
	f = ex / 5000;
		
	printf("5000원 : %d장\n", f);
	ex = ex - f * 5000;

	t = ex / 1000;
	printf("1000원 : %d장\n", t);
	ex = ex - t * 1000;

	f_ = ex / 500;
	printf("500원 : %d개\n", f_);
	ex = ex - t * 500;

	f_ = ex / 100;
	printf("100원 : %d개\n", t_);



	return 0;
}