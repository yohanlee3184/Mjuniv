#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>// 이거 사용



int main_02() {

	float r = 0;

	printf("반지름을 입력하시오:");

	scanf("%f", &r);

	printf("원의 둘레:%f\n", 2 * 3.14 * r);

	printf("원의 면적:%f",3.14*r*r);


	return 0;
}