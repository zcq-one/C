/*
    8.��6�µĳ����嵥6.20�У�power()��������һ��double�����������������ݡ��Ľ��ú�����ʹ������ȷ���㸺�ݡ�
    ���⣬����Ҫ����0���κδ��ݶ�Ϊ0���κ�����0���ݶ�Ϊ1������Ӧ����0��0����δ���壬��˰Ѹ�ֵ����Ϊ1����
    Ҫʹ��һ��ѭ�������ڳ����в��Ըú�����
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