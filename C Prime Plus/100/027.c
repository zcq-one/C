//  ��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include <stdio.h>
#define LENGTH 5

void InvertedOrder(int n);
int main(void)
{
    printf("Enter five characters:\n");
    InvertedOrder(LENGTH);

    return 0;
}

void InvertedOrder(int n)
{
    char receive;

    if (n <= 1)
    {
        receive = getchar();
        printf("Reverse output:\n");
        putchar(receive);
    }
    else
    {
        receive = getchar();
        InvertedOrder(n - 1);
        putchar(receive);
    }
}