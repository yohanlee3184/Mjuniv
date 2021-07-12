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

			printf("%d, 자유투 성공 ", randum);
			count++;
			printf("%현재 %d번 성공\n", count);
		}
		else printf("%d, 자유투 실패\n", randum);
	}
		return 0;
}