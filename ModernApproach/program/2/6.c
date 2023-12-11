//  6. 修改上题，用如下公式对多项式求值：     ((((3x + 2) x - 5)x - 1)x + 7)x - 6 

#include <stdio.h>
int main(void)
{
    float x, ans;
    scanf("%f", &x);

    ans = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x -6;
    printf("%g", ans);
    return 0;
}