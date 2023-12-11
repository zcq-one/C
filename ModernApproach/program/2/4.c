/*
    4. 编写一个程序，要求用户输入一个美元数额，然后显示出增加5%税率后的相应金额。
        格式如下所示：
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