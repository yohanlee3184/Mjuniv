#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main(void)
{
	int x, y, r;
	printf("두개의 정수를 입력하시오 (큰수, 작은수): "); // 유클리드 호제법, 정수론에 해당하며 증명 과정이 진짜 진짜 어렵다.

	scanf("%d %d", &x, &y);
	
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.\n", x);

	return 0;
}