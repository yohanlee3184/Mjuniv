#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_01(void) {
	int total = 0;
	int day = 0;
	int fly_fee = 0;
	int hotel_fee = 0;
	int day_fee = 0;

	printf("������ �� ���ΰ���?: ");
	scanf("%d", &day);
	printf("�װ��� ����: ");
	scanf("%d", &fly_fee);
	printf("ȣ�� 1�� ����: ");
	scanf("%d", &hotel_fee);
	printf("�Ϸ翡 �ʿ��� �뵷: ");
	scanf("%d", &day_fee);

	total = day * (hotel_fee + day_fee) + fly_fee;

	printf("==========================\n");

	printf("�� ���� ���: %d\n", total);

	printf("==========================\n");
	
	return 0;
}