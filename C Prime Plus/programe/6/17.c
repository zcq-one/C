/*
    17.Chuckie LuckyӮ����100����Ԫ��˰�󣩣����ѽ������������8%���˻���
    ��ÿ������һ�죬Chuckieȡ��10����Ԫ����дһ�����򣬼���������Chuckie��ȡ���˻���Ǯ��
*/

#include <stdio.h>

int main(void)
{
    const double TAX_RATE = 0.08;
    double money = 1000000.0;
    int year = 0;

    while (money > 0)
    {
        money += money * TAX_RATE;
        money -= 100000.0;
        year++;
    }

    printf("%d\n", year);

    return 0;
}