#include<stdio.h>

int main_05(void)
{
	// ������ 
	char num1 = 10;
	short num2 = 20;
	int num3 = 30;
	long num4 = 40;

	// �Ǽ���
	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n-------������ �ڷ����� ������ �޸� ũ��-------\n");
	printf("char���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(char), sizeof(num1));
	printf("short���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(short), sizeof(num2));
	printf("int���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(int), sizeof(num3));
	printf("long���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(long), sizeof(num4));

	printf("\n-------�Ǽ��� �ڷ����� ������ �޸� ũ��-------\n");
	printf("float���� ũ��: %d����Ʈ, %u����Ʈ \n", sizeof(float), sizeof(num5));
	printf("double���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(double), sizeof(num6));
	printf("long double���� ũ��: %d����Ʈ, %d����Ʈ \n", sizeof(long double), sizeof(num7));
	
	char ch = 'A'; // 65 
	int number = ch;
	printf("ASCII %d �� ������ %c �Դϴ�.\n", number, number);
	printf("sizeof() = %d\n", sizeof(2.0 + 1));
	printf("sizeof() = %d\n", sizeof(2.0f + 1));

	
		

	return 0;
}