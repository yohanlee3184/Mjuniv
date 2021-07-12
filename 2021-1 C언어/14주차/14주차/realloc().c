#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_2(void)
{

	int* p;
	int i, items;

	printf("항목의 개수는 몇개입니까? ");
	scanf("%d", &items);
	p = (int*)malloc(sizeof(int) * items);

	for (i = 0; i < items; i++) {
	
		printf("항목(정수)을 입력하시오: ");
		scanf("%d", &p[i]);
	}

	printf("\n입력된 값은 다음과 같습니다: \n");
	for (i = 0; i < items; i++) {
	
		printf("%d", p[i]);
		printf("\n");
	}

	int itemsToAdd;
	printf("추가할 항목의 개수는 몇개입니까?");
	scanf("%d", &itemsToAdd);

	p = (int*)realloc(p, sizeof(int) * (items + itemsToAdd));

	for (i = 0; i < itemsToAdd; i++) {
	
		printf("항목(정수)을 입력하시오: ");
		scanf("%d", &p[items + i]);
	
	}

	printf("\n입력된 값은 다음과 같습니다: \n");

	for (i = 0; i < (items + itemsToAdd); i++) { 
		printf("%d", p[i]); 
		printf("\n"); 
	
	}
	
	int itemsToRemove;
	printf("줄이고자 하는 항목의 개수는 몇개입니까? ");
	scanf("%d", &itemsToRemove);
	p = (int*)realloc(p, sizeof(int) * (items+itemsToAdd - itemsToRemove));
	printf("\n입력된 값은 다음과 같습니다: \n");

	for (i = 0; i < (items + itemsToAdd - itemsToRemove); i++) {
		printf("%d", p[i]);
		printf("\n");
	}
	free(p);

	return 0;
}