#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_01(void) {
	int total = 0;
	int day = 0;
	int fly_fee = 0;
	int hotel_fee = 0;
	int day_fee = 0;

	printf("여행은 몇 박인가요?: ");
	scanf("%d", &day);
	printf("항공권 가격: ");
	scanf("%d", &fly_fee);
	printf("호텔 1박 가격: ");
	scanf("%d", &hotel_fee);
	printf("하루에 필요한 용돈: ");
	scanf("%d", &day_fee);

	total = day * (hotel_fee + day_fee) + fly_fee;

	printf("==========================\n");

	printf("총 여행 비용: %d\n", total);

	printf("==========================\n");
	
	return 0;
}