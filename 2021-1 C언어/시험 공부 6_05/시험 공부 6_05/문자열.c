#include <stdio.h>
#include <string.h>

int main_02() {

    char str1[20] = "hello";
    printf("str1 문자열 길이: %d\n", strlen(str1));

    char str2[] = "hello world";
    printf("str2 문자열 길이: %d\n", strlen(str2));

    char str3[] = { 'h','e','l','l','o' }; //-- 문자의 마지막인 \0이 없어서 무작정 글을 샌다.
    printf("str3 문자열 길이: %d\n", strlen(str3));

    char str4[] = { 'h','e','l','l','o','\0' };
    printf("str4 문자열 길이: %d\n", strlen(str4));// 좋은 정보

    return 0;
}