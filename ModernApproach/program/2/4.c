/*
    4. ��дһ������Ҫ���û�����һ����Ԫ���Ȼ����ʾ������5%˰�ʺ����Ӧ��
        ��ʽ������ʾ��
            Enter an amount: 100.00
            With tax added: $105.00 
*/

#include <stdio.h>
int main(void)
{
    double amount, taxes;

    printf("Enter an amount: ");
    scanf(" %lf", &amount);

    taxes = amount * 0.05;

    printf("With tax added: $%.2lf", amount + taxes);

    return 0;

}