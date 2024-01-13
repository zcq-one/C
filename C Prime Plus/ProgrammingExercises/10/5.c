//  5.��дһ�����������ش�����double�������������ֵ����Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в��Ըú�����

#include <stdio.h>

double max_min(const double source[], int n)
{
    double max, min;
    max = min = source[0];

    for (int i = 0; i < n; i++)
    {
        max = (max > source[i]) ? max : source[i];
        min = (min < source[i]) ? min : source[i];
    }

    return (max - min);
}

int main(void)
{
    double source[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 5.5};

    printf("Different value is %g\n", max_min(source, 6));

    return 0;
}