/*
    6.��д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������Сֵ�����1���������м�ֵ�����2�����������ֵ�����3��������
*/

#include <stdio.h>
void small_to_big(double * x, double * y, double * z);

int main(void)
{
    double a, b, c;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Originally a = %g, b = %g and c = %g\n", a, b, c);
    small_to_big(&a, &b, &c);
    printf("Now x = %g, y = %g and c = %g\n", a, b, c);

    return 0;
}

void small_to_big(double * x, double * y, double * z)
{
    double temp;

    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}