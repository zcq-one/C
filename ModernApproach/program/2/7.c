/*
    7. ��дһ������Ҫ���û�����һ����Ԫ���Ȼ����ʾ�����������������20��Ԫ��10��Ԫ��5��Ԫ��1��Ԫ��Ʊ�����
        Enter a dollar amount: 93
        $20 bills: 4 
        $10 bills: 1  
        $5 bills: 0  
        $1 bills: 3 
    ��ʾ�������������20��ȷ��20��Ԫ��Ʊ��������Ȼ��Ӹ������м�ȥ20��Ԫ���ܽ���������ֵ�ĳ�Ʊ�ظ���һ������ȷ���ڳ�����ʼ��ʹ������ֵ����Ҫ�ø�������
*/

#include <stdio.h>
int main(void)
{
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount / 20);
    amount -= 20 * (amount / 20);

    printf("$10 bills: %d\n", amount / 10);
    amount -= 10 * (amount / 10);

    printf("$5 bills: %d\n", amount / 5);
    amount -= 5 * (amount / 20);

    printf("$1 bills: %d\n", amount / 1);

    return 0;
}