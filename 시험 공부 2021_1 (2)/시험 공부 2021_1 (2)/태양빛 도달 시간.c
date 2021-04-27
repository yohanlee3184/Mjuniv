#include<stdio.h>
int main(void) {

	float speed = 300000;
	float length = 149600000;
	double time = 0;
	time = (double)length /(double)speed;


	printf("빛의 속도는 %f km/s\n",speed);
	printf("태양과	지구와의 거리 %f km\n",length);
	printf("도달 시간은 %f s\n",time);

	return 0;
}