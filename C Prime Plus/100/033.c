//  题目：判断一个数字是否为质数。

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
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    puts(isPrime(num) == true ? "true" : "false");

    return 0;
}