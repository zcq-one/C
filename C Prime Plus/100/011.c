/**
 * ��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ����
 * �ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
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