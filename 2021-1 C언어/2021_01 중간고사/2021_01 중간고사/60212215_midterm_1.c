#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char first;
	char second;
	char third;
	char fourth;
	unsigned result;

	printf("Enter the first character: ");
	scanf(" %c", &first);

	printf("Enter the second character: ");
	scanf(" %c", &second);

	printf("Enter the third character: ");
	scanf(" %c", &third);

	printf("Enter the fourth character: ");
	scanf(" %c", &fourth);


	printf("%c=0x%X\n", first, first);
	printf("%c=0x%X\n", second, second);
	printf("%c=0x%X\n", third, third);
	printf("%c=0x%X\n", fourth, fourth);

	result = ((unsigned)first) | ((unsigned)second << 8) | ((unsigned)third << 16) | ((unsigned)fourth << 24);
	
	printf("result=0x%X", result);



	return 0;
}