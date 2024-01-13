/*
    11.��дһ����������һ��int���͵�3��5��ά���飬���ú��ʵ�ֵ��ʼ������
    �ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2����������ʾ����Ԫ�ص���ֵ��
    ��дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ�������������������Ժ�������������Ϊ������
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