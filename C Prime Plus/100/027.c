//  题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

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