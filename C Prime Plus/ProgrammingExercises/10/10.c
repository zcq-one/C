/*
    10.��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ�����浽�� 3 �������С�
    Ҳ����˵���������1�а�����ֵ��2��4��5��8������2�а�����ֵ��1��0��4��6����ô�ú�����3��4��9��14������3�����顣
    ��������3����������һ�������С����һ���򵥵ĳ����в��Ըú�����
*/

#include <stdio.h>
#define N 4

void show_arr(double const source[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5g", source[i]);
    putchar('\n');
}

void sum(double const a[], double const b[], double c[], int n)
{
    for (int i = 0; i < n; i++)
        c[i] += (a[i] + b[i]);
}

int main(void)
{
    double a[N] = { 2, 4, 5, 8 };
    double b[N] = { 1, 0, 4, 6 };
    double c[N] = { 0.0 };

    sum(a, b, c, N);
    show_arr(a, N);
    show_arr(b, N);
    show_arr(c, N);

    return 0;
}