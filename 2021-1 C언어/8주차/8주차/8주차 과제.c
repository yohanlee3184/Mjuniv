#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int find = 0;
	int i;
	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &find);
	for (i = 0;i<10;i++) {
		
		if (num[i] == find) {
		printf("Ž�� ���� �ε���= %d", i);
		return 0;
		}

		}

	printf("�������� ����");

	return 0;
}