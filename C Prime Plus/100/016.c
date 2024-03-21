/**
 * 题目：输入两个正整数m和n，求其最大公约数(gcb)和最小公倍数(LCM)。
 * 程序分析：
 * （1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；
 * （2）求最大公约数用更相减损术
*/

#include <stdio.h>

//  greatest common divisor
long gcd(long m, long n);

int main(void)
{
    long m, n, recieve;
    scanf("%ld %ld", &m, &n);
    recieve = gcd(m, n);

    printf("gcb = %ld, LCM = %ld.", recieve, m * n / recieve);

    return 0;
}

long gcd(long m, long n)
{
    long temp;

    while (m != n)
    {
        temp = m;
        if (m < n)
        {
            m = n;
            n = temp;
        }
        m = m - n;
    }

    return m;
}