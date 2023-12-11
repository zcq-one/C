/*
    5. 编程要求用户输入x的值，然后显示如下多项式的值：  3x^5+2x^4-5x^3-x^2+7x-6 
*/

#include <stdio.h>
int main(void)
{
    float x, ans;
    scanf("%f", &x);

    ans = 3 * x * x * x * x * x
        + 2 * x * x * x * x
        - 5 * x * x * x
        - 1 * x * x
        + 7 * x
        - 6;

    printf("%g", ans);

    return 0;
}