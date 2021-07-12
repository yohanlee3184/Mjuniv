#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_integer(void)
{
	int value;
	
	scanf("%d", &value);
	return value;
}

int calculate_gcd(int x, int y)
{
	if (x % y == 0) {
		return y;
	}
	else {
		return calculate_gcd(y, x % y);
	}
}

int calculate_lcm(int x, int y)
{
	return x* y / calculate_gcd(x, y);
}

int main(void) {

	int x, y;

	printf("������ �Է��Ͻÿ� (ū��) : ");
	x = get_integer();

	printf("������ �Է��Ͻÿ� (���� ��) : ");
	y = get_integer();

	printf("�ִ������� %d �Դϴ�.\n", calculate_gcd(x, y));

	printf("�ּҰ������ %d �Դϴ�,\n", calculate_lcm(x, y));

	return 0;

}