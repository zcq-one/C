/*
    2.��дһ�����򣬳�ʼ��һ��double���͵����飬Ȼ��Ѹ���������ݿ�����3�����������У���main()��������4�����飩��
    ʹ�ô������ʾ���ĺ������е�1�ݿ�����
    ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�������Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�����
    ��3��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ�롣
    Ҳ����˵������������������������������ʾ��
        double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
        double target1[5];
        double target2[5];
        double target3[5];
        copy_arr(target1, source, 5);
        copy_ptr(target2, source, 5);
        copy_ptrs(target3, source, source + 5);
*/

#include <stdio.h>

void copy_arr(double copy[], double const source[], int n);
void copy_ptr(double * copy, double const * source, int n);
void copy_ptrs(double copy[], double const source[], double const * end);
void show_arr(double const source[], int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double copy1[5];
    double copy2[5];
    double copy3[5];

    printf("Source array:\n");
    show_arr(source, 5);

    printf("Target1:\n");
    copy_arr(copy1, source, 5);
    show_arr(copy1, 5);

    printf("Target2:\n");
    copy_ptr(copy2, source, 5);
    show_arr(copy2, 5);

    printf("Target3:\n");
    copy_ptrs(copy3, source, (source + 5));
    show_arr(copy3, 5);
}

void show_arr(double const source[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5g", source[i]);
    putchar('\n');
}

void copy_arr(double copy[], double const source[], int n)
{
    for (int i = 0; i < n; i++)
        copy[i] = source[i];
}

void copy_ptr(double * copy, double const * source, int n)
{
    for (int i = 0; i < n; i++)
        *(copy + i) = *(source + i);
}

void copy_ptrs(double copy[], double const source[], double const * end)
{
    for (int i = 0; i < end - source; i++)
        *(copy + i) = *(source + i);
}