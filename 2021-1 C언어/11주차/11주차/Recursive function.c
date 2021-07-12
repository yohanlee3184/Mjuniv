#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {

	printf("factorial(%d)\n", n);

	if (n == 0) { return 1; }
	else { return factorial(n-1)*n; }

}


int main_01(void) {

	int x=0, result;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!은 %d입니다.\n", x, result);

	return 0;
}