#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include  <stdio.h>
#include  <math.h>

int  main(void)
{
    double n1 = 0;
    double n2 = 0;
    double n3 = 0;
    double d = 0;
    double root = 0;

    printf("계수 a를 입력하시오: ");
    scanf("%lf", &n1);

    printf("계수 b를 입력하시오: ");
    scanf("%lf", &n2);

    printf("계수 c를 입력하시오: ");
    scanf("%lf", &n3);

    if (n1 == 0) // 2차 방정식이 아닌 경우 걸러내기 (1) // 테스크 케이스 # 4
    {
        printf ("방정식의 근은 %lf입니다.\n", -n3/ n2);
    }

    else  // 2차 방정식인 경우 (2)

    {
        d = n2 * n2 - 4 * n1 * n3; //판별식

        if (d > 0) // 테스크 케이스 #1 #2
        {
            root = sqrt(d);
            printf("방정식의 근은 %lf입니다.\n방정식의 근은 %lf입니다.\n", (-n2 + root) / (2 * n1), (-n2 - root) / (2 * n1));
        }

        else if (d == 0)
        {

            printf("방정식의 근은 %lf입니다.\n", (-n2) / (2 * n1));
        }
        else { // 테스크 케이스 #3
            printf("실근은 존재하지 않습니다.\n");
        }
    }

    

    return  0;
}