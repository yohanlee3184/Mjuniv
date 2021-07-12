#include<stdio.h>
#include<limits.h>

int main_08() {

	short x = -32768;//2^(15)-1
	unsigned short y = 0;//2^(16)-1

	x = x - 1;

	printf("%d\n", x);

	y = y - 1;

	printf("%d\n", y);



	return 0;
}