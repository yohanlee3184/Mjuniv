#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_2(void)
{

	int* p;
	int i, items;

	printf("�׸��� ������ ��Դϱ�? ");
	scanf("%d", &items);
	p = (int*)malloc(sizeof(int) * items);

	for (i = 0; i < items; i++) {
	
		printf("�׸�(����)�� �Է��Ͻÿ�: ");
		scanf("%d", &p[i]);
	}

	printf("\n�Էµ� ���� ������ �����ϴ�: \n");
	for (i = 0; i < items; i++) {
	
		printf("%d", p[i]);
		printf("\n");
	}

	int itemsToAdd;
	printf("�߰��� �׸��� ������ ��Դϱ�?");
	scanf("%d", &itemsToAdd);

	p = (int*)realloc(p, sizeof(int) * (items + itemsToAdd));

	for (i = 0; i < itemsToAdd; i++) {
	
		printf("�׸�(����)�� �Է��Ͻÿ�: ");
		scanf("%d", &p[items + i]);
	
	}

	printf("\n�Էµ� ���� ������ �����ϴ�: \n");

	for (i = 0; i < (items + itemsToAdd); i++) { 
		printf("%d", p[i]); 
		printf("\n"); 
	
	}
	
	int itemsToRemove;
	printf("���̰��� �ϴ� �׸��� ������ ��Դϱ�? ");
	scanf("%d", &itemsToRemove);
	p = (int*)realloc(p, sizeof(int) * (items+itemsToAdd - itemsToRemove));
	printf("\n�Էµ� ���� ������ �����ϴ�: \n");

	for (i = 0; i < (items + itemsToAdd - itemsToRemove); i++) {
		printf("%d", p[i]);
		printf("\n");
	}
	free(p);

	return 0;
}