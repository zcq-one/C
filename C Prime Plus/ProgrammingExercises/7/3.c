/*
    3.��дһ�����򣬶�ȡ����ֱ���û����� 0��
    ��������󣬳���Ӧ�����û������ż���������� 0����������Щż����ƽ��ֵ�������������������������ƽ��ֵ��
*/

#include <stdio.h>
#define STOP 0

int main(void)
{
    int oddnumber_num, evennumber_num, oddnumber_total, evennumber_total, number;
    oddnumber_num = oddnumber_total = evennumber_total = evennumber_num = 0;

    printf("Enter some numbers (0 to quit): \n");
    while ((scanf("%d", &number) == 1) && (number != STOP))
    {
        if (number % 2 != 0)
        {
            oddnumber_num++;
            oddnumber_total += number;
        }
        else
        {
            evennumber_num++;
            evennumber_total += number;
        }
    }
    printf("the number  of  oddnumber is %d\n", oddnumber_num);
    printf("the average of  oddnumber is %g\n",
            oddnumber_num != 0 ? (float)oddnumber_total / oddnumber_num : 0);
    printf("the number  of evennumber is %d\n", evennumber_num);
    printf("the average of evennumber is %g\n",
            evennumber_num != 0 ? (float)evennumber_total / evennumber_num : 0);
    printf("Done!\n");

    return 0;
}
