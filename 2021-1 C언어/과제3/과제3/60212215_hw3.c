#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include<stdio.h>

int main(void) {

	int n; // 입력값
	int i; // 덧셈값
	long sum; // 시그마값


		do {
			i = 1;
			n = 0;
			sum = 0;
			printf("k 값을 입력하시오: ");
			scanf("%d", &n);

			if (n == -1) {
				break;
			} // -1을 받으면 실행 종료
			else {
				while (sum<=n) {
					
					sum += i;
					i++;
				}
			}	
			printf("1부터 %d까지의 합이 %d입니다.\n", i - 2, sum - i + 1);
			
		} while (1);
	
		if (n== -1 )
		printf("프로그램을 종료합니다.");

	return 0;
}