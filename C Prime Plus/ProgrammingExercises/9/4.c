/*
    4.�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ�����ȡ�������ĵ�����
    ��дһ����������������double���͵Ĳ��������������������ĵ���ƽ������
*/

#include <stdio.h>
double ave(double x, double y);

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("%g", ave(a, b));

    return 0;
}

double ave(double x, double y)
{
    return (1 / (((1/x) + (1/y)) / 2));
}