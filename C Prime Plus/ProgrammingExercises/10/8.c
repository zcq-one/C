/*
    8.ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص������е�3����5��Ԫ�ؿ������ں�3��Ԫ�ص������С�
    �ú���������Ҫ�޸ģ�ֻ��Ҫѡ����ʵ�ʵ�ʲ�����ʵ�ʲ�������Ҫ���������������С��ֻ��Ҫ������Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ�������
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