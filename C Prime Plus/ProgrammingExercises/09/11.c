//  11.��д������Fibonacci()�������ú�����ѭ������ݹ����쳲���������

#include <stdio.h>
void Fibonacci(int n);
int main(void)
{
    int n;
    printf("Enter the end number: ");
    scanf("%d", &n);
    Fibonacci(n);

    return 0;
}

void Fibonacci(int n)
{
    long prev = 1, now = 1, next;

    for (long i = 0; i < n; i++)
    {
        printf("%ld\n", prev);
        next = prev + now;
        prev = now;
        now = next;
    }
}