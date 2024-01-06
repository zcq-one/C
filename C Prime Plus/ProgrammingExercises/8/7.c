/*  7.�޸ĵ�7�µı����ϰ8�����ַ��������ֱ�ǲ˵���ѡ���q����5��Ϊ��������ı�ǡ�
    ʹ��switch��ɹ��ʵȼ�ѡ�����г������ʾ�Ĳ˵�Ӧ������������
        *****************************************************************
        Enter the number corresponding to the desired pay rate or action:
        1) $8.75/hr                                   2) $9.33/hr
        3) $10.00/hr                                  4) $11.20/hr
        5) quit
        *****************************************************************
    ���ѡ�� 1��4 ���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ����
    ����Ҫͨ��ѭ�����У������û����� 5��
    ������� 1��5 ��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣
    ʹ��#define�������ų�����ʾ�����ʵȼ���˰�ʡ�
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
    printf("a) $8.75/hr                                   b) $9.33/hr\n");
    printf("c) $10.00/hr                                  d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
}

int main(void)
{
    char choose;
    float choose_pay, hours, gen_income, tax;

    while (1)
    {
        printmenu();
        while (!(choose == 'a' || choose == 'b' || choose == 'c' || choose == 'd' || choose == 'q'));

        if (choose == 'a')
            choose_pay = CHOOSE1;
        else if (choose == 'b')
            choose_pay = CHOOSE2;
        else if (choose == 'c')
            choose_pay = CHOOSE3;
        else if (choose == 'd')
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
            printf("�Ƿ�������㣨���� p ���������� q �˳����� ");
            scanf(" %d", &choose);
        }while ((choose != 'p') && (choose != 'q'));
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