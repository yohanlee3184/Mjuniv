#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main_01(void) {

	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("���� ���� �̸�: ");
	scanf("%s", file1);

	printf("���� ���� �̸�: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	int c;
	while (fgets(buffer, sizeof(buffer), fp1) != NULL) {
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}