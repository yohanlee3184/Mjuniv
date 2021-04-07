#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main () {

	unsigned char decimal = 0 ;
	unsigned char cons = 0x80;  //1000000
	
	printf("10진수:");
	scanf("%hhu", &decimal); // 으아ㅏㅏ아ㅏ아 % d 하면 런타임 에러 다음에 실수하지 말자. ;;;;;
	printf("2진수:");


	while (cons != 0) {
	
		printf("%d", (decimal & cons) != 0 ? 1 : 0);
	
		cons >>= 1; 
	}

	
return 0;

}





