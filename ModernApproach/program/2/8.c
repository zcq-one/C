/*
    8. ��̼����һ���ڶ����������»�����ʣ��Ĵ����

        Enter amount of loan: 20000.00
        Enter interest rate: 6.0
        Enter monthly payment: 386.66

        Balance remaining after first payment: $19713.34 
        Balance remaining after second payment: $19425.25 
        Balance remaining after third payment: $19135.71 

    ����ʾÿ�λ��������ʱ������λС����
    ��ʾ��ÿ���µĴ�������ȥ������󣬻���Ҫ���ϴ�������������ʵĳ˻��������ʵļ��㷽���ǰ��û����������ת���ɰٷ����ٳ���12��

*/

#include <stdio.h>
int main(void)
{
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interst rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    loan += loan * rate / 100 / 12 - payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan += loan * rate / 100 / 12 - payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan += loan * rate / 100 / 12 - payment;
    printf("Balance remaining after thired payment: $%.2f\n", loan);

    return 0;
}