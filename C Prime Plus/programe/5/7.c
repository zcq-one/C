/*
    7.��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ��
    �Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ���ݸ��ú�����
*/

#include <stdio.h>

void square(double n);

int main(void)
{
    double num;
    printf("enter a double number: ");
    scanf("%lf", &num);

    square(num);

    return 0;
}

void square(double n)
{
    printf("%g\n", n * n);
}