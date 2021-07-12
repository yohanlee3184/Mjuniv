#include <stdio.h>

int main_02() {

    int i = 0;
    for (; i < 100; i++) {
        printf("i = %d\n", i);
        if (i > 50) break;
    }

    printf("i의 최종값은 %d입니다.\n", i);
    return 0;

}