#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int find = 0;
	int i;
	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &find);
	for (i = 0;i<10;i++) {
		
		if (num[i] == find) {
		printf("탐색 성공 인덱스= %d", i);
		return 0;
		}

		}

	printf("존재하지 않음");

	return 0;
}