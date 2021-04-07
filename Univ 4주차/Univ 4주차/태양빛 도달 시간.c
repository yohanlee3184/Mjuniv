#include<stdio.h>
int main_08(void) {

	double v = 300000;
	double s = 149600000;
	double t;

	t = s / v;
	printf("빛의 속도 : %f km/s\n", v);
	printf("태양과 지구 사이의 거리 : %f km\n", s);
	printf("걸리는 시간 : %f s\n",t );

	return 0;
}