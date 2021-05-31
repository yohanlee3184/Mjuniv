#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main_02(void)
{
	long length;

	FILE* fp = fopen("copyco.txt", "rb");
	if (fp == NULL) {
	
		printf("orgin.txt 파일을 열 수 없습니다.");
		exit(1);
	
	}

	fseek(fp, 0, SEEK_END);

	length = ftell(fp);
	printf("파일의 크기=%ld바이트\n", length);
	fclose(fp);

	return 0;
}