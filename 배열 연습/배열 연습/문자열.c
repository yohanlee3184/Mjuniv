#include <stdio.h>
#include <string.h>    // strlen �Լ��� ����� ��� ����

int main()
{
    char* s1 = "Hello";       // �����Ϳ� ���ڿ� Hello�� �ּ� ����
    char s2[10] = "Hello";    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

    printf("%d\n", strlen(s1));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
    printf("%d\n", strlen(s2));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����

    return 0;
}