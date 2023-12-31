/*
    8.修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。
    使用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
        *****************************************************************
        Enter the number corresponding to the desired pay rate or action:
        1) $8.75/hr                                   2) $9.33/hr
        3) $10.00/hr                                  4) $11.20/hr
        5) quit
        *****************************************************************
    如果选择 1～4 其中的一个数字，程序应该询问用户工作的小时数。
    程序要通过循环运行，除非用户输入 5。
    如果输入 1～5 以外的数字，程序应提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。
    使用#define创建符号常量表示各工资等级和税率。
*/

#include <stdio.h>
#define CHOOSE1   8.75
#define CHOOSE2   9.33
#define CHOOSE3   10.00
#define CHOOSE4   11.20
#define BASE_TIME 40
#define TIME_TIME 1.5
#define RATE1     0.15
#define RATE2     0.2
#define RATE3     0.25
#define BREAK1    300
#define BREAK2    450
#define TAX1      (BREAK1 * RATE1)
#define TAX2      (TAX1 + ((BREAK2 - BREAK1) * RATE2))

void printmenu(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                                   2) $9.33/hr\n");
    printf("3) $10.00/hr                                  4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
}

int main(void)
{
    int choose;
    float choose_pay, hours, gen_income, tax;

    while (1)
    {
        printmenu();

        do{
            printf("请输入菜单选项(1 ~ 5): ");
            scanf(" %1d", &choose);
        }while (choose < 1 || choose > 5);

        if (choose == 1)
            choose_pay = CHOOSE1;
        else if (choose == 2)
            choose_pay = CHOOSE2;
        else if (choose == 3)
            choose_pay = CHOOSE3;
        else if (choose == 4)
            choose_pay = CHOOSE4;
        else
            break;

        printf("Enter your work hours in a week: ");
        scanf("%f", &hours);
        hours = (hours > BASE_TIME) ? BASE_TIME + ((hours - BASE_TIME) * TIME_TIME) : hours;
        gen_income = choose_pay * hours;

        if (gen_income <= BREAK1)
            tax = gen_income * RATE1;
        else if (gen_income <= BREAK2)
            tax = TAX1 + (gen_income - BREAK1) * RATE2;
        else
            tax = TAX2 + (gen_income - BREAK2) * RATE3;

        printf("gen_income = $%.2f\ntax = $%.2f\nnet_income = $%.2f\n",
                gen_income, tax, gen_income - tax);

        do {
            printf("是否继续计算（输入 1 继续；输入 0 退出）： ");
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