//  题目：求1+2!+3!+...+20!的和。

#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n > 1)
        return (n * factorial(n - 1));
    else
        return 1;
}

int main(void)
{
    unsigned long long sum = 0;
    for (int i = 1; i <= 20; i++)
        sum += factorial(i);

    printf("%llu", sum);

    return 0;
}