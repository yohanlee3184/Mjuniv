#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define filesize 53058

int main() {

	int x = 0;
	int y = 0;
	int z = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	
	FILE* fp1, * fp2, * fp3 = NULL;


	fp1 = fopen("input.txt", "rb");
	fp2 = fopen("nomarkers.txt", "wb");
	fp3 = fopen("marked_index.txt", "ab");

	

	int* buffer;
	buffer = (int*)malloc(sizeof(int) * filesize);

	fread(buffer, sizeof(int), filesize, fp1);

	int* ptr = strstr(buffer, "CPCPCPC{");
	

	x = ptr;
	y = buffer;
	z = x - y;

	fwrite(buffer, sizeof(char), z, fp2);
	fclose(fp2);

	fp2 = fopen("nomarkers.txt", "ab");

	int* ptr2 = strstr(buffer, "CPCPCPC}");

	a = ptr2;
	b = ptr2 - ptr + 8;

	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	free(buffer);

	return 0;
}