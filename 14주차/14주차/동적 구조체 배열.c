
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//��ȭ�� ����ü�� ǥ��	
struct movie {


	char title[100]; // ��ȭ ����
	double rating; // ��ȭ ����

};

int main_1(void) {

	struct movie* ptr;
	int i, n;

	printf("��ȭ�� ����: ");
	scanf("%d", &n);

	ptr = (struct movie*)malloc(sizeof(struct movie)*n);//�� ū �ڷ����� ����Ʈ ����� �ȴ�.

	if (ptr == NULL) {

		printf("�޸� �Ҵ� ����\n");

		exit(1);
	}


	for (i = 0; i < n; i++){
	
		printf("��ȭ ����:");
		scanf("%s", ptr[i].title);

		printf("��ȭ ����:");
		scanf("%lf", &ptr[i].rating);
	
	}

	printf("=============================\n");
	for (i = 0; i < n; i++) {
	
		printf("��ȭ ����: %s \n", ptr[i].title);
		printf("��ȭ ����: %f\n", ptr[i].rating);

	}
	printf("=============================\n");
	free(ptr);
	return 0;
}