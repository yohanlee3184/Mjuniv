#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include<stdio.h>

int main(void) {

	int n; // �Է°�
	int i; // ������
	long sum; // �ñ׸���


		do {
			i = 1;
			n = 0;
			sum = 0;
			printf("k ���� �Է��Ͻÿ�: ");
			scanf("%d", &n);

			if (n == -1) {
				break;
			} // -1�� ������ ���� ����
			else {
				while (sum<=n) {
					
					sum += i;
					i++;
				}
			}	
			printf("1���� %d������ ���� %d�Դϴ�.\n", i - 2, sum - i + 1);
			
		} while (1);
	
		if (n== -1 )
		printf("���α׷��� �����մϴ�.");

	return 0;
}