/**
 * 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔
 * 子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
*/

#include <stdio.h>

long Fibonacci(int n);

int main(void)
{
    for (int i = 1; i <= 40; i++)
    {
        printf("%12ld", Fibonacci(i));

        if (i % 4 == 0)
            putchar('\n');
    }

    return 0;
}

long Fibonacci(int n)
{
    if (n >= 3)
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    else
        return 1;
}

/*
    #include <stdio.h>
    int main(void)
    {
        long Fibonacci[41] = { 0, 1 };
        for (int i = 2; i < 41; i++)
            Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
        printf("%ld", Fibonacci[40]);
    }
*/