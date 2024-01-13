//  9.��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������

#include <stdio.h>

int isPrime(unsigned long n)
{
    if (n == 1)
        return 0;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main(void)
{
    long num;
    printf("Enter a positive integer: ");
    while (scanf("%ld", &num) == 1)
    {
        for (long i = 1, c = 0; i <= num; i++)
        {
            if (isPrime(i))
            {
                printf("%6ld", i);

                if (++c % 10 == 0)
                    putchar('\n');
            }
            else
                continue;
        }
        printf("\nEnter next positive integer: ");
    }

    return 0;
}