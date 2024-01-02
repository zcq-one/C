/*
    8.编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
*/

#include <stdio.h>
int main(void)
{
    float a, b;
    printf("Enter two floating-point numbers:\n");

    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("ANSWER: %g\n", (a-b)/(a*b));
        printf("Enter two floating-point numbers:\n");
    } 
    printf("Done!\n");
    return 0;
}