/*
    9.编写一个程序，初始化一个double类型的3×5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
    还要编写一个以变长数组为形参的函数以显示两个数组的内容。
    这两个函数应该能处理任意N×M数组（如果编译器不支持变长数组，就使用传统C函数处理N×5的数组）。
*/

#include <stdio.h>
#define N 3
#define M 5

 void show_arr(int n, int m, double const source[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%8.2lf", source[i][j]);
        putchar('\n');
    }
}

void copy_arr(int n, int m, double copy[n][m], double const source[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            copy[i][j] = source[i][j];
}

int main(void)
{
    double source[N][M] = 
    {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0},
    };
    double copy[N][M] = {0.0};

    printf("Before:\n");
    show_arr(N, M, source);
    show_arr(N, M, copy);
    printf("After:\n");
    copy_arr(N, M, copy, source);
    show_arr(N, M, source);
    show_arr(N, M, copy);

    return 0;

}