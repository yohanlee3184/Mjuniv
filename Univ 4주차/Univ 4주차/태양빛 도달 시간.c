#include<stdio.h>
int main_08(void) {

	double v = 300000;
	double s = 149600000;
	double t;

	t = s / v;
	printf("���� �ӵ� : %f km/s\n", v);
	printf("�¾�� ���� ������ �Ÿ� : %f km\n", s);
	printf("�ɸ��� �ð� : %f s\n",t );

	return 0;
}