//  题目：利用递归方法求5!。

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
    for (int i = 1; i <= 5; i++)
        printf("%llu\n", factorial(i));

    return 0;
}