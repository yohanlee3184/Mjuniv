#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void) {
	srand((unsigned)time(NULL));
	int randum = 0;
	int count = 0;
	while (count < 10) {


		randum = rand() % 2;
		if (randum == 1) {

			printf("%d, ������ ���� ", randum);
			count++;
			printf("%���� %d�� ����\n", count);
		}
		else printf("%d, ������ ����\n", randum);
	}
		return 0;
}