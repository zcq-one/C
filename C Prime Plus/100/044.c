//  ��Ŀ��ѧϰʹ����ε����ⲿ������

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