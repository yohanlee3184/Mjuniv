#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>

int main(void) {
	int n1 = 0; // ������ ���� (1)
	int n2 = 0;
	int val = 0;
	char op = 0;

	printf("������ �Է��Ͻÿ�\n(��:2 + 5)\n>> ");
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
			printf("�и� 0 �Դϴ�."); // �и� 0 ���� �ɷ�����(4)
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
		printf("%08X %c %08X = %08X", n1, op, n2, val);  //�� 8���� ������ (2)
		break;

	default:
		printf("�������� �ʴ� �������Դϴ�."); //�������� �ʴ� ������ (3)
		break;
	}

	return 0;
}


