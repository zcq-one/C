/*
    8. 编程计算第一、第二、第三个月还贷后剩余的贷款金额：

        Enter amount of loan: 20000.00
        Enter interest rate: 6.0
        Enter monthly payment: 386.66

        Balance remaining after first payment: $19713.34 
        Balance remaining after second payment: $19425.25 
        Balance remaining after third payment: $19135.71 

    在显示每次还款后的余额时保留两位小数。
    提示：每个月的贷款余额减去还款金额后，还需要加上贷款余额与月利率的乘积。月利率的计算方法是把用户输入的利率转换成百分数再除以12。

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