/*
    13.��дһ��������ʾ�û�����3������ÿ��������5��double���͵����������û�����ȷ����Ӧ�������������ֵ���ݣ���
    �ó���Ӧ�����������
        a.���û���������ݴ�����3��5��������
        b.����ÿ�飨5�������ݵ�ƽ��ֵ
        c.�����������ݵ�ƽ��ֵ
        d.�ҳ���15�������е����ֵ
        e.��ӡ���
ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ����
�������b��Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ���������ѭ�����øú���3�Ρ�
���ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c��d�ĺ���Ӧ�ѽ����������������
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