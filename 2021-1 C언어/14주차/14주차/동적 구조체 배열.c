
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//영화를 구조체로 표현	
struct movie {


	char title[100]; // 영화 제목
	double rating; // 영화 평점

};

int main_1(void) {

	struct movie* ptr;
	int i, n;

	printf("영화의 개수: ");
	scanf("%d", &n);

	ptr = (struct movie*)malloc(sizeof(struct movie)*n);//더 큰 자료형의 바이트 배수가 된다.

	if (ptr == NULL) {

		printf("메모리 할당 오류\n");

		exit(1);
	}


	for (i = 0; i < n; i++){
	
		printf("영화 제목:");
		scanf("%s", ptr[i].title);

		printf("영화 평점:");
		scanf("%lf", &ptr[i].rating);
	
	}

	printf("=============================\n");
	for (i = 0; i < n; i++) {
	
		printf("영화 제목: %s \n", ptr[i].title);
		printf("영화 평점: %f\n", ptr[i].rating);

	}
	printf("=============================\n");
	free(ptr);
	return 0;
}