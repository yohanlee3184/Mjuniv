#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main () {

	unsigned char decimal = 0 ;
	unsigned char cons = 0x80;  //1000000
	
	printf("10����:");
	scanf("%hhu", &decimal); // ���Ƥ����Ƥ��� % d �ϸ� ��Ÿ�� ���� ������ �Ǽ����� ����. ;;;;;
	printf("2����:");


	while (cons != 0) {
	
		printf("%d", (decimal & cons) != 0 ? 1 : 0);
	
		cons >>= 1; 
	}

	
return 0;

}





