#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_01(void) {



	int sucess_count = 0, result;

	unsigned int try_count = 0;
	
	srand( (unsigned)time(NULL));//���� �ð� �� ȣ��
	
	while(1){
	//for (;;) {

		result = rand() % 2;

		try_count++;
		
		if (result == 1) {
			sucess_count++;
			printf("������ ����: success_count = %d\n", sucess_count);
		}

		else
		{
			sucess_count = 0;
			printf("������ ����.. �ٽ� ó�� ���·�\n");
		}

		if (sucess_count == 10) {
			break;
		}

	}

	printf("�������� �õ� Ƚ���� %d �̴�.\n	", try_count);

	return 0;
}

