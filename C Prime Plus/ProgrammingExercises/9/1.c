//  1.���һ������min(x, y)����������double����ֵ�Ľ�Сֵ����һ���򵥵����������в��Ըú�����

#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &x, &y);
    printf("The smaller one is %g.", min(x, y));

    return 0;
}

double min(double x, double y)
{
    return (x < y) ? x : y;
}