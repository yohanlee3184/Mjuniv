#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_02(void) {
	char name[80];
	char home[80];
	int age;

	printf("�̸��� ������? : ");
	scanf("%s", name);
	printf("��� ��ƿ�? : ");
	scanf("%s", home);
	printf("�� �� �ΰ���? : ");
	scanf("%d", &age);
	printf("==================================\n");
	printf("�� �� : %s\n", name);
	printf("������ : %s\n", home);
	printf("�� �� : %d\n", age);
	printf("==================================\n");
	return 0;
}