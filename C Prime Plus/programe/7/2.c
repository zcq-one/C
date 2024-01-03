/*
    2.编写一个程序读取输入，读到#字符停止。
    程序要打印每个输入的字符以及对应的ASCII码（十进制）。一行打印8个字符。
    建议:使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。
*/

#include <stdio.h>
int main(void)
{
    char ch;
    int letters = 0;

    printf("Enter a text (# to quit):\n");
    while ((ch = getchar()) != '#')
    {
        letters++;
        if (ch == '\n')
            printf(" \\n--%-3d", ch);
        else if (ch == '\t')
            printf(" \\t--%-3d", ch);
        else
            printf("%3c--%-3d", ch, ch);

        if (letters % 8 == 0)
            putchar('\n');
    }

    return 0;
}