/*
    17.Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。
    在每年的最后一天，Chuckie取出10万美元。编写一个程序，计算多少年后Chuckie会取完账户的钱？
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