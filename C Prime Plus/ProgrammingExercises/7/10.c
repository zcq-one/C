/*
    10.1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。
    下面是该税收计划的摘要（美元数为应征税的收入）：
        *****************************************************
            类别                税金
            单身                17850按15%计，超出部分按28%计
            户主                23900按15%计，超出部分按28%计
            已婚，共有          29750按15%计，超出部分按28%计
            已婚，离异          14875按15%计，超出部分按28%计
        *****************************************************
    例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15×17850+0.28×（20000?17850）美元。
    编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
*/

#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define CHOOSE1 17850
#define CHOOSE2 23900
#define CHOOSE3 29750
#define CHOOSE4 14875

void printmenu(void)
{
    printf("***********************************************************\n");
    printf("    类别                  税金\n");
    printf("    1.单身                17850按15%计，超出部分按28%计\n");
    printf("    2.户主                23900按15%计，超出部分按28%计\n");
    printf("    3.已婚，共有          29750按15%计，超出部分按28%计\n");
    printf("    4.已婚，离异          14875按15%计，超出部分按28%计\n");
    printf("    5.退出\n");
    printf("***********************************************************\n");
}

int main(void)
{
    int choose;
    long demarcation;
    float tax, income;

    while (1)
    {
        printmenu();

        do{
            printf("请输入菜单选项(1 ~ 5): ");
            scanf(" %1d", &choose);
        }while (choose < 1 || choose > 5);

        if (choose == 1)
            demarcation = CHOOSE1;
        else if (choose == 2)
            demarcation = CHOOSE2;
        else if (choose == 3)
            demarcation = CHOOSE3;
        else if (choose == 4)
            demarcation = CHOOSE4;
        else
            break;

        printf("Enter your income: ");
        scanf(" %f", &income);

        if (income <= demarcation)
            tax = income * RATE1;
        else
            tax = demarcation * RATE1 + (income - demarcation) * RATE2;

        printf("tax = %g\n", tax);

        do {
            printf("是否继续输入（输入 1 继续；输入 0 退出）： ");
            scanf(" %d", &choose);
        }while ((choose != 1) && (choose != 0));
        if (choose == 1)
        {
            putchar('\n');
            continue;
        }
        else
            break;
    }

    printf("Finish!\n");
}