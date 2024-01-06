/*
    7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
    自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。
*/

#include <stdio.h>

void square(double n);

int main(void)
{
    double num;
    printf("enter a double number: ");
    scanf("%lf", &num);

    square(num);

    return 0;
}

void square(double n)
{
    printf("%g\n", n * n);
}