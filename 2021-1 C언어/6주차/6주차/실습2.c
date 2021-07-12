#include<stdio.h>

int main_03(void) {

	int input = 0;

	while (input != -1) {
	
		printf("숫자를 입력해주세요 :");
		scanf_s("%d", &input);

		printf("%d\n", input);
	
	
	}
	printf("프로그램 종료!!\n");


	return 0;
}