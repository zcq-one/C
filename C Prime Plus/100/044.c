//  题目：学习使用如何调用外部函数。

#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("ans = %d", add(a, b));

    return 0;
}