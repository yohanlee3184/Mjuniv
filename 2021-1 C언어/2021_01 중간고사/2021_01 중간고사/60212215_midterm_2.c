#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	srand((unsigned)time(NULL));

	int a = 0; // 랜덤값 1
	int b = 0; // 랜덤값 2
	int c = 0;// 랜덤 연산자 
	int d = 0;// 결과 값
	int e = 0;// 입력값
	int count = 0; // 맞춘 수
	int i = 0; // 문제 수
		
		while (d == e) {
			i++;
			a = rand() % 100;
			b = rand() % 100;
			c = rand() % 4;

			if (c == 0) {
				printf("Problem %d: %d + %d = ", i, a, b);
				d = a + b;
				scanf("%d", &e);

			}

			else if (c == 1) {
				printf("Problem %d: %d - %d = ", i, a, b);
				d = a - b;
				scanf("%d", &e);

			}
			else if (c == 2) {
				printf("Problem %d: %d * %d = ", i, a, b);
				d = a * b;
				scanf("%d", &e);
			}
			else {

				printf("Problem %d: %d %% %d = ", i, a, b);
				d = a % b;
				scanf("%d", &e);

			}

			if (d == e) {

				printf("Correct answer\n");
				count++;
			}
			else {
				printf("Wrong answer\n");
			}


		}

	printf("Your score is %d.", count);


	return 0;
}