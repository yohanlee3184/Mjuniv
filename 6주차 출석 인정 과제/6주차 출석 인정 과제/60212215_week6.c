#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main(void)
{
	int x, y, r;
	printf("�ΰ��� ������ �Է��Ͻÿ� (ū��, ������): "); // ��Ŭ���� ȣ����, �����п� �ش��ϸ� ���� ������ ��¥ ��¥ ��ƴ�.

	scanf("%d %d", &x, &y);
	
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;
}