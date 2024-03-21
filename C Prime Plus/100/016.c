/**
 * ��Ŀ����������������m��n���������Լ��(gcb)����С������(LCM)��
 * ���������
 * ��1����С������=�����������֮���������ǵ����Լ�����ؼ���������Լ����
 * ��2�������Լ���ø��������
*/

#include <stdio.h>

//  greatest common divisor
long gcd(long m, long n);

int main(void)
{
    long m, n, recieve;
    scanf("%ld %ld", &m, &n);
    recieve = gcd(m, n);

    printf("gcb = %ld, LCM = %ld.", recieve, m * n / recieve);

    return 0;
}

long gcd(long m, long n)
{
    long temp;

    while (m != n)
    {
        temp = m;
        if (m < n)
        {
            m = n;
            n = temp;
        }
        m = m - n;
    }

    return m;
}