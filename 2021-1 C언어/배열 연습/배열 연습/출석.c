#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_02(void) {

	int attend[16];
	int sum = 0;
	double per = 0;

	for (int i = 0;i<16;i++) {
	
		printf("%d��° ���ǿ� �⼮�ϼ̳���<�⼮�� 1, �Ἦ�� 0>: ",i+1);
		scanf("%d", &attend[i]);
		if (attend[i] == 1) 
			sum += attend[i];
	}
	per = 100*(1-((double)sum / (double)16));

	if (per>0.3) 
		printf("���� �ϼ� �����Դϴ�<%f%%>", per);
	else 
		printf("���� �ϼ� �����Դϴ�<%f%%>",per);

	return 0;
}