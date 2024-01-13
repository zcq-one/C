/*
    12.�������������������У�
        1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
        1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
    ��дһ����������������������е��ܺͣ�ֱ������ĳ��������ʾ��������-1 ���
    ��-1��ż����-1��˵�1�����û�����������ָ���Ĵ��������û�����0��ֵʱ������
    �롣�鿴����100�1000�10000�����ܺͣ��Ƿ���ÿ�����ж�������ĳֵ��
*/

#include <stdio.h>
int main(void)
{
    int flag;
    unsigned long times;
    double den, sum1, sum2;

    printf("Enter loop times: ");

    while (scanf("%lu", &times) == 1)
    {
        flag = 1;
        den = 1.0;
        sum1 = sum2 = 0.0;

        for (unsigned long i = 1; i <= times; i++)
        {
            sum1 += 1.0 / den;
            sum2 += flag * (1 / den);

            den += 1.0;
            flag *= -1;
        }
        printf("Sum1 = %lf\nSum2 = %lf\n", sum1, sum2);

        printf("Enter loop times again: ");
    }
    printf("Done!\n");
    return 0;
}