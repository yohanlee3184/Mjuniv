#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define students 5
int main(void) 
{
	int scores[students];
	int sum = 0;
	int i;
	double average;

	for (i=0;i<5;i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < 5; i++)
		sum += scores[i];

		average = (double)sum / (double)students;
	printf("���� ��� = %lf\n", average);
	
	return 0;
}