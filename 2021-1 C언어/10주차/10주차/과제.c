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

	printf("정수를 입력하시오 (큰수) : ");
	x = get_integer();

	printf("정수를 입력하시오 (작은 수) : ");
	y = get_integer();

	printf("최대공약수는 %d 입니다.\n", calculate_gcd(x, y));

	printf("최소공배수는 %d 입니다,\n", calculate_lcm(x, y));

	return 0;

}