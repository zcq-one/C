//  题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main(void)
{
    int num;
    scanf("%d", &num);

    printf("%d =", num);
    for (int i = 2; i <= num; i++)
    {
        while (isPrime(i) && num % i == 0)
        {
            printf(" %d", i);
            num /= i;

            if (num != 1)
                printf(" *");
        }
    }

    return 0;
}