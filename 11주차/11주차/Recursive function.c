#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {

	printf("factorial(%d)\n", n);

	if (n == 0) { return 1; }
	else { return factorial(n-1)*n; }

}


int main_01(void) {

	int x=0, result;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!�� %d�Դϴ�.\n", x, result);

	return 0;
}