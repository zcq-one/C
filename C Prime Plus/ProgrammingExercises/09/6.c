/*
    6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
*/

#include <stdio.h>
void small_to_big(double * x, double * y, double * z);

int main(void)
{
    double a, b, c;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Originally a = %g, b = %g and c = %g\n", a, b, c);
    small_to_big(&a, &b, &c);
    printf("Now x = %g, y = %g and c = %g\n", a, b, c);

    return 0;
}

void small_to_big(double * x, double * y, double * z)
{
    double temp;

    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}