//  3.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数。

#include <stdio.h>

void show_arr(int const source[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5d", source[i]);
    putchar('\n');
}

int max_in_array(const int source[], int n)
{
    int max;
    max = source[0];

    for (int i = 1; i < n; i++)
        max = (max > source[i]) ? max : source[i];

    return max;
}

int main(void)
{
    int source[5] = {1, 2, -77, 94, 57};

    printf("Source array is:\n");
    show_arr(source, 5);
    printf("The max one in source array is %d", max_in_array(source, 5));

    return 0;
}