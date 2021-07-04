#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define filesize 1000

int main_01() {

	long length;
	char* p = NULL;

	FILE* fp1,* fp2,* fp3 = NULL;

	
	fp1 = fopen("input.txt", "rb");
	fseek(fp1, 0, SEEK_END);
	length = ftell(fp1);
	printf("%d", length);

	fclose(fp1);
	
	return 0;
}