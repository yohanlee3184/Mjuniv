#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>



int main_01() {
	
	int day = 0;
	int ap = 0;
	int hotel = 0;
	int yd = 0;

	printf("여행은 몇박인가요?:");
	scanf("%d", &day);

	printf("항공권 가격:");
	scanf("%d", &ap);

	printf("호텔 1박 가격:");
	scanf("%d", &hotel);

	printf("하루에 필요한 용돈:");
	scanf("%d", &yd);

	printf("\n============================\n");

	printf("총 여행 비용:%d\n",day*hotel+ap+day*yd);

	printf("\n============================\n");





	return 0;

}