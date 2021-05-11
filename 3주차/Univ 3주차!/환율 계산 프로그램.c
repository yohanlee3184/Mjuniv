#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>

int main_04(){

	float per = 0;    // 변수의 데이터 타입에 의해 할당 되는 메모리 공간

	int kr = 0;   //


	printf("환율을 입력하시오: ");   
	scanf("%f", &per);    


	printf("원화 금액을 입력하시오: ");
	scanf("%d", &kr);



	printf("원화 %d원은 %f달러입니다.\n", kr, kr / per);

	return 0;

}
