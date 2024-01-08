//  9.使用递归函数重写编程练习8

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
    if (p > 0)
        return n * power(n, --p);
    else if (p < 0)
        return (1 / n) * power(n, ++p);
    else
        return 1;
}