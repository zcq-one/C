/*
    4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
    编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
*/

#include <stdio.h>
double ave(double x, double y);

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("%g", ave(a, b));

    return 0;
}

double ave(double x, double y)
{
    return (1 / (((1/x) + (1/y)) / 2));
}