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

    printf("��� a�� �Է��Ͻÿ�: ");
    scanf("%lf", &n1);

    printf("��� b�� �Է��Ͻÿ�: ");
    scanf("%lf", &n2);

    printf("��� c�� �Է��Ͻÿ�: ");
    scanf("%lf", &n3);

    if (n1 == 0) // 2�� �������� �ƴ� ��� �ɷ����� (1) // �׽�ũ ���̽� # 4
    {
        printf ("�������� ���� %lf�Դϴ�.\n", -n3/ n2);
    }

    else  // 2�� �������� ��� (2)

    {
        d = n2 * n2 - 4 * n1 * n3; //�Ǻ���

        if (d > 0) // �׽�ũ ���̽� #1 #2
        {
            root = sqrt(d);
            printf("�������� ���� %lf�Դϴ�.\n�������� ���� %lf�Դϴ�.\n", (-n2 + root) / (2 * n1), (-n2 - root) / (2 * n1));
        }

        else if (d == 0)
        {

            printf("�������� ���� %lf�Դϴ�.\n", (-n2) / (2 * n1));
        }
        else { // �׽�ũ ���̽� #3
            printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
        }
    }

    

    return  0;
}