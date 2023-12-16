/*
    7. 编写一个程序，要求用户输入一个美元数额，然后显示出如何用最少张数的20美元、10美元、5美元和1美元钞票来付款：
        Enter a dollar amount: 93
        $20 bills: 4 
        $10 bills: 1  
        $5 bills: 0  
        $1 bills: 3 
    提示：将付款金额除以20，确定20美元钞票的数量，然后从付款金额中减去20美元的总金额。对其他面值的钞票重复这一操作。确保在程序中始终使用整数值，不要用浮点数。
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