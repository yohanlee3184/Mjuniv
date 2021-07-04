#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char temp[100];
	char* str[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("문자열을 입력하세요 : ");
		fgets(temp,99,stdin);
		str[i] = (char*)malloc(strlen(temp) + 1); 
		strcpy(str[i], temp); 
	}
	for (i = 0; i < 3; i++) {
		printf("%s", str[i]);
	}

	for (i = 0; i < 3; i++) {
		free(str[i]);
	}
	return 0;
}