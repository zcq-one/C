//  14.以变长数组作为函数形参，完成编程练习13。

#include <stdio.h>
#define N 3
#define M 5

double average_arr(int m, double const array[]);
double average_all(int n, int m, double const array[n][m]);
double max_array(int n, int m, double const array[n][m]);

int main(void)
{
    double array[N][M] = { 0.0 };

    printf("Enetr 3 groups of numbers, each containing 5 double numbers:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%lf", &array[i][j]);

    for (int i = 0; i < N; i++)
        printf("The average of No.%d set is %g\n", i + 1, average_arr(M, array[i]));

    printf("The average of all number is %g\n", average_all(N, M, array));

    printf("The max in the array is %g\n", max_array(N, M, array));
}

double average_arr(int m, double const array[])
{
    double total = 0.0;
    for (int i = 0; i < m; i++)
        total += array[i];

    return (total / m);
}

double average_all(int n, int m, double const array[n][m])
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            total += array[i][j];

    return (total / (n * m));
}

double max_array(int n, int m, double const array[n][m])
{
    double max = array[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            max = (max > array[i][j]) ? max : array[i][j];

    return max;
}