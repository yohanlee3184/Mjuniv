#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main_02(void)
{
	long length;

	FILE* fp = fopen("copyco.txt", "rb");
	if (fp == NULL) {
	
		printf("orgin.txt ������ �� �� �����ϴ�.");
		exit(1);
	
	}

	fseek(fp, 0, SEEK_END);

	length = ftell(fp);
	printf("������ ũ��=%ld����Ʈ\n", length);
	fclose(fp);

	return 0;
}