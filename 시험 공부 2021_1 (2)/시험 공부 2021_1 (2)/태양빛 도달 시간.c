#include<stdio.h>
int main(void) {

	float speed = 300000;
	float length = 149600000;
	double time = 0;
	time = (double)length /(double)speed;


	printf("���� �ӵ��� %f km/s\n",speed);
	printf("�¾��	�������� �Ÿ� %f km\n",length);
	printf("���� �ð��� %f s\n",time);

	return 0;
}