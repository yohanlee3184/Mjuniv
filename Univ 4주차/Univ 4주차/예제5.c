#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
int main_05(void) {
	
	int x, y, z, sum;

	sum = 0;
	printf("3���� ������ �Է��ϼ��� (x, y, z): ");
	scanf("%d %d %d", &x, &y, &z);
	sum += x;
	sum += y;
	sum += z;

	printf("3�� ������ ���� %d\n", sum);

	return 0;
}