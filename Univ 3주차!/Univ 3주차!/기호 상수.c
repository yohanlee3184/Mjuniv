#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include<stdio.h>
#define TAX_RATE 0.2

int main() {

	const int MONTHS = 12;
	int m_salary, y_salary;

		printf("������ �Է��ϼ���:");
		scanf("%d", &m_salary);
		y_salary = MONTHS * m_salary;
		printf("������ %d�Դϴ�.", y_salary);
		printf("������ %f�Դϴ�.", y_salary * TAX_RATE);

	return 0;
}