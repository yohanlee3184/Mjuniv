#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int guess = 0;
	int answer = 0;
	unsigned int try_count = 0;

	srand((unsigned)time(NULL));//���� �ð� �� ȣ��

		answer = rand() % 100;

		do
		{
			printf("������ �����Ͽ� ���ÿ� : ");
			scanf("%d", &guess);

			if (guess < answer) {
				printf("������ ������ �۽��ϴ�.\n");
			}
			else if (guess > answer) {
				printf("������ ������ Ů�ϴ�.\n");
			
			}
			try_count++;
		}
		while(guess != answer);

		printf("�����մϴ�. �õ� Ƚ�� = %d\n", try_count);
	return 0;
}