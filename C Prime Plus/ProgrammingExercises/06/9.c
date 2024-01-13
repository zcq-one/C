// 9.修改练习8，使用一个函数返回计算的结果。

#include <stdio.h>

float answer(float a, float b);

int main(void)
{
    float a, b;
    printf("Enter two floating-point numbers:\n");

    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("ANSWER: %g\n", answer(a, b));
        printf("Enter two floating-point numbers:\n");
    } 
    printf("Done!\n");
    return 0;
}

float answer(float a, float b)
{
    return (a - b) / (a * b);
}