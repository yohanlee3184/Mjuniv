#include <stdio.h>
#include <string.h>

int main_02() {

    char str1[20] = "hello";
    printf("str1 ���ڿ� ����: %d\n", strlen(str1));

    char str2[] = "hello world";
    printf("str2 ���ڿ� ����: %d\n", strlen(str2));

    char str3[] = { 'h','e','l','l','o' }; //-- ������ �������� \0�� ��� ������ ���� ����.
    printf("str3 ���ڿ� ����: %d\n", strlen(str3));

    char str4[] = { 'h','e','l','l','o','\0' };
    printf("str4 ���ڿ� ����: %d\n", strlen(str4));// ���� ����

    return 0;
}