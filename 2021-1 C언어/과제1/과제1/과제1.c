#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>

int main(void) {
	int n1 = 0; // 정수형 가정 (1)
	int n2 = 0;
	int val = 0;
	char op = 0;

	printf("수식을 입력하시오\n(예:2 + 5)\n>> ");
	scanf("%d %c %d", &n1, &op, &n2);


	switch (op) {  

	case '+': 

		val = n1 + n2;
		printf("%d %c %d = %d", n1, op, n2, val);
		break;

	case '-': 
		val = n1 - n2;
		printf("%d %c %d = %d", n1, op, n2, val);
		break; 

	case '*':
		val = n1 * n2;
		printf("%d %c %d = %d", n1, op, n2, val);
		break;

	case '/': 
		if (n2 == 0) {
			printf("분모가 0 입니다."); // 분모가 0 먼저 걸러내기(4)
			break;
		}
		else {
			val = n1 / n2;
			printf("%d %c %d = %d", n1, op, n2, val); 
			break;
		}

	case '%':
		
			val = n1 % n2;
			printf("%d %c %d = %d", n1, op, n2, val);
			break;
		

	case '&':
		val = n1 & n2;
		printf("%08X %c %08X = %08X", n1, op, n2, val);
		break;


	case '|':
		val = n1 | n2;
		printf("%08X %c %08X = %08X", n1, op, n2, val); 
		break;

	case '^':
		val = n1 ^ n2;
		printf("%08X %c %08X = %08X", n1, op, n2, val);  //총 8가지 연산자 (2)
		break;

	default:
		printf("지원되지 않는 연산자입니다."); //지원하지 않는 연산자 (3)
		break;
	}

	return 0;
}


