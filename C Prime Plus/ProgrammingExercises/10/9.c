/*
    9.��дһ�����򣬳�ʼ��һ��double���͵�3��5��ά���飬ʹ��һ������䳤����ĺ������俽������һ����ά�����С�
    ��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�
    ����������Ӧ���ܴ�������N��M���飨�����������֧�ֱ䳤���飬��ʹ�ô�ͳC��������N��5�����飩��
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