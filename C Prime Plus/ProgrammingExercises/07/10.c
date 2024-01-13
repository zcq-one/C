/*
    10.1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ���
    �����Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
        *****************************************************
            ���                ˰��
            ����                17850��15%�ƣ��������ְ�28%��
            ����                23900��15%�ƣ��������ְ�28%��
            �ѻ飬����          29750��15%�ƣ��������ְ�28%��
            �ѻ飬����          14875��15%�ƣ��������ְ�28%��
        *****************************************************
    ���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��0.15��17850+0.28����20000?17850����Ԫ��
    ��дһ���������û�ָ������˰��������Ӧ��˰���룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣
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
    printf("    ���                  ˰��\n");
    printf("    1.����                17850��15%�ƣ��������ְ�28%��\n");
    printf("    2.����                23900��15%�ƣ��������ְ�28%��\n");
    printf("    3.�ѻ飬����          29750��15%�ƣ��������ְ�28%��\n");
    printf("    4.�ѻ飬����          14875��15%�ƣ��������ְ�28%��\n");
    printf("    5.�˳�\n");
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
            printf("������˵�ѡ��(1 ~ 5): ");
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
            printf("�Ƿ�������루���� 1 ���������� 0 �˳����� ");
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