/*
    4.使用if else语句编写一个程序读取输入，读到#停止。
    用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
*/

#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int repalce = 0;

    printf("Enter a text:\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == '.')
        {
            putchar('!');
            repalce++;
        }
        else if (ch == '!')
        {
            printf("!!");
            repalce++;
        }
        else
            putchar(ch);
    }
    printf("\n%d", repalce);

    return 0;
}