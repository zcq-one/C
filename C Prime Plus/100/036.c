//  题目：求100之内的素数。

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return (n == 1) ? false : true;
}

int main(void)
{
    for (int i = 1; i <= 100; i++)
        if (isPrime(i))
            printf("%d\n", i);
    return 0;
}