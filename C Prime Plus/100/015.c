/**
 * ��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
 * ���������(a>b)?a:b��������������Ļ������ӡ�
 */

#include <stdio.h>
int main(void)
{
    double performance;
    scanf("%lf", &performance);

    char grade = (performance >= 90 ? 'A' : (performance >= 60 ? 'B' : 'C'));

    putchar(grade);

    return 0;
}