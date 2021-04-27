#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_02(void) {
	char name[80];
	char home[80];
	int age;

	printf("이름이 뭐예요? : ");
	scanf("%s", name);
	printf("어디 살아요? : ");
	scanf("%s", home);
	printf("몇 살 인가요? : ");
	scanf("%d", &age);
	printf("==================================\n");
	printf("이 름 : %s\n", name);
	printf("서식지 : %s\n", home);
	printf("나 이 : %d\n", age);
	printf("==================================\n");
	return 0;
}