#include<stdio.h>
#include<stdlib.h> // ���� �ѹ� Generation


int main(void) {

	int success_count = 0;
	int result;


	while (success_count<10) {
	
		result = rand() % 2;
		if (result == 1) {
			success_count += 1;	
			printf("������ ���� : sucess_count = %d\n", success_count);
		}
		else {
			success_count = 0;
			printf("������ ����.. �ٽ� ó�� ���·�\n");
		}
	}

	return 0;
}