/*
    2. 编写一个计算球体体积的程序，其中球体半径为10 m，参考公式 v = 4Πr^3 / 3。注意，分数 4/3 应写为
    4.0f/3.0f 。（如果分数写成 4/3 会产生什么结果？）提示：C 语言没有指数运算符，所以需要对 r
    自乘两次来计算 r^3 。
*/

#include <stdio.h>
#define PI 3.14f
int main(void)
{
    int r = 10;
    double V;

    V = (4.0f / 3.0f) * PI *r * r * r;
    printf("V = %.2lfm^3", V);

    return 0;
}