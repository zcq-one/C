//  5.��д������һ������larger_of()���ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ��
//  ���磬 larger_of(x, y)���x��y�нϴ��ֵ���¸�����������

#include <stdio.h>

void larger_of(double * x, double * y);

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Originally a = %g and b = %g\n", a, b);
    larger_of(&a, &b);
    printf("Now a = %g and b = %g\n", a, b);
    return 0;
}

void larger_of(double * x, double * y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
}