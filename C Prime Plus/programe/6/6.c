/*
    6.编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。
    要求用户输入表格的上下限。使用一个for循环。
*/

#include <stdio.h>
int main(void)
{
    int upper, lower;
    printf("Enter lower and upper:\n");
    scanf("%d %d", &lower, &upper);

    for ( ; lower <= upper; lower++)
        printf("%5d%8d%8d\n", lower, lower*lower, lower*lower*lower);
    return 0;
}