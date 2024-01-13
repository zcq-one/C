/*
    13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设用户都正确地响应，不会输入非数值数据）。
    该程序应完成下列任务。
        a.把用户输入的数据储存在3×5的数组中
        b.计算每组（5个）数据的平均值
        c.计算所有数据的平均值
        d.找出这15个数据中的最大值
        e.打印结果
每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。
完成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。
对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
*/

#include <stdio.h>
#define N 3
#define M 5

double average_arr(double const array[], int n);
double average(double const array[][M], int n);
double max_array(double const array[][M], int n);

int main(void)
{
    double array[N][M] = { 0.0 };

    printf("Enetr 3 groups of numbers, each containing 5 double numbers:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%lf", &array[i][j]);

    for (int i = 0; i < N; i++)
        printf("The average of No.%d set is %g\n", i + 1, average_arr(array[i], M));

    printf("The average of all number is %g\n", average(array, N));

    printf("The max in the array is %g\n", max_array(array, N));
}

double average_arr(double const array[], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
        total += array[i];

    return (total / n);
}

double average(double const array[][M], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < M; j++)
            total += array[i][j];

    return (total / (N * M));
}

double max_array(double const array[][M], int n)
{
    double max = array[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < M; j++)
            max = (max > array[i][j]) ? max : array[i][j];

    return max;
}