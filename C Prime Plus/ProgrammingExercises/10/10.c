/*
    10.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第 3 个数组中。
    也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。
    函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
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