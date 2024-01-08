/*
    8.第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。改进该函数，使其能正确计算负幂。
    另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。
    要使用一个循环，并在程序中测试该函数。
*/

#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power:");
    printf(" to which\nthe number will be raise. Enter q to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        if (x == 0)
            xpow = 0;
        else if (exp == 0)
            xpow = 1;
        else
            xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hop you enjoyed this power trip!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = ((p > 0) ? p : -p); i >= 1; i--)
        pow *= n;

    return (p > 0) ? pow : (1 / pow);
}