#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>

int main_04(){

	float per = 0;    // ������ ������ Ÿ�Կ� ���� �Ҵ� �Ǵ� �޸� ����

	int kr = 0;   //


	printf("ȯ���� �Է��Ͻÿ�: ");   
	scanf("%f", &per);    


	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &kr);



	printf("��ȭ %d���� %f�޷��Դϴ�.\n", kr, kr / per);

	return 0;

}
