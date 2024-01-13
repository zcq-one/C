/*
    8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元素的数组中。
    该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
*/

#include <stdio.h>

void show_arr(double const source[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5g", source[i]);
    putchar('\n');
}

void copy_ptr(double * copy, double const * source, int n)
{
    for (int i = 0; i < n; i++)
        *(copy + i) = *(source + i);
}

int main(void)
{
    double source[7] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    double copy[3] = {0.0};

    copy_ptr(copy, source + 2, 3);
    show_arr(source, 7);
    show_arr(copy, 3);

    return 0;
}