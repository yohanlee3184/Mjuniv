#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>



int main_01() {
	
	int day = 0;
	int ap = 0;
	int hotel = 0;
	int yd = 0;

	printf("������ ����ΰ���?:");
	scanf("%d", &day);

	printf("�װ��� ����:");
	scanf("%d", &ap);

	printf("ȣ�� 1�� ����:");
	scanf("%d", &hotel);

	printf("�Ϸ翡 �ʿ��� �뵷:");
	scanf("%d", &yd);

	printf("\n============================\n");

	printf("�� ���� ���:%d\n",day*hotel+ap+day*yd);

	printf("\n============================\n");





	return 0;

}