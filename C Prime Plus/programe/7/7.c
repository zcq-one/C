/*
    7.编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
        a.基本工资 = 10.00美元/小时
        b.加班（超过40小时） = 1.5倍的时间
        c.税率：前300美元为15%
                续150美元为20%
                余下的为25%
    用#define定义符号常量。不用在意是否符合当前的税法。
*/

#include <stdio.h>
#define BASE_PAY  10.00
#define BASE_TIME 40
#define TIME_TIME 1.5
#define RATE1     0.15
#define RATE2     0.2
#define RATE3     0.25
#define BREAK1    300
#define BREAK2    450
#define TAX1      (BREAK1 * RATE1)
#define TAX2      (TAX1 + ((BREAK2 - BREAK1) * RATE2))

int main(void)
{
    float hours, gen_income, tax;

    gen_income = tax = 0.0f;
    printf("Enter your work hours in a week: ");
    scanf("%f", &hours);
    hours = (hours > BASE_TIME) ? BASE_TIME + ((hours - BASE_TIME) * TIME_TIME) : hours;
    gen_income = BASE_PAY * hours;

    if (gen_income <= BREAK1)
        tax = gen_income * RATE1;
    else if (gen_income <= BREAK2)
        tax = TAX1 + (gen_income - BREAK1) * RATE2;
    else
        tax = TAX2 + (gen_income - BREAK2) * RATE3;

    printf("gen_income = $%.2f\ntax = $%.2f\nnet_income = $%.2f\n",
            gen_income, tax, gen_income - tax);

    return 0;
}