/*
    11.编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。
    该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示出各元素的新值。
    编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以函数名和行数作为参数。
*/

#include <stdio.h>
#define ROWS 3
#define COLS 5

void show_arr(int rows, int const source[][COLS])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%-5d", source[i][j]);
        putchar('\n');
    }
}

void double_arr(int rows, int source[][COLS])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
            source[i][j] *= 2;
    }
}

int main(void)
{
    int source[ROWS][COLS] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    printf("Before:\n");
    show_arr(ROWS, source);
    printf("After:\n");
    double_arr(ROWS, source);
    show_arr(ROWS, source);

    return 0;
}