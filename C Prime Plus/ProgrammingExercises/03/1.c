//  1.通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    int max_int = INT_MAX;
    float max_float = FLT_MAX;
    float small_float = 10.0 / 3;

    printf("The INT_MAX = %d\nINT_MAX + 1 = %d\n", max_int, max_int + 1);
    printf("The FLT_MAX = %f\nFLT_MAX * 10 = %f\n", max_float, max_float * 10);
    printf("10.0 / 3 = %f", small_float);

    return 0;
}