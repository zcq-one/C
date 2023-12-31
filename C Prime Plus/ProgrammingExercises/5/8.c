/*
    8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例如下：
        This　program　computes　moduli.
        Enter　an　integer　to　serve　as　the　second　operand:　256
        Now　enter　the　first　operand:　438
        438　%　256　is　182
        Enter　next　number　for　first　operand　(<=　0　to　quit):　1234567
        1234567　%　256　is　135
        Enter　next　number　for　first　operand　(<=　0　to　quit):　0
        Done
*/

#include <stdio.h>
int main(void)
{
    long first, second;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%ld", &second);
    printf("Now enter the first operand: ");
    scanf("%ld" ,&first);

    while (first > 0)
    {
        printf("%ld %% %ld = %d\n", first, second, first % second);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%ld", &first);
    }
    printf("bye\n");

    return 0;
}