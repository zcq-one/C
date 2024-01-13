//  4.编写一个函数，返回储存在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。

#include <stdio.h>

void subscript(const double source[], int n)
{
    double max = source[0];

    for (int i = 1; i < n; i++)
        max = (max > source[i]) ? max : source[i];

    for (int i = 1; i < n; i++)
        if (max == source[i])
            printf("%-3d", i);
}

int main(void)
{
    double source[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 5.5};

    subscript(source, 6);

    return 0;
}