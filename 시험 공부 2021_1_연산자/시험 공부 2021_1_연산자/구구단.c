#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_04() {

    for (int i = 1; i <= 9; i++) {

        printf("\n---- %d´Ü ----\n", i);

        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d ", i, j, i * j);

        }
        printf("\t");
    }
}