//  题目：判断 101 到 200 之间的素数。

#include <stdio.h>

int isPrime(int n);

int main(void)
{
    for (int i = 100; i <= 200; i++)
        if (isPrime(i))
            printf("%d\n", i);

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}