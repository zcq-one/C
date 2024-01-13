/*
    6.编写程序读取输入，读到#停止，报告ei出现的次数。
    注意:该程序要记录前一个字符和当前字符。用“Receive your eieio award”这样的输入来测试。
*/

#include <stdio.h>
#define STOP '#'

int main(void)
{
    int num = 0;
    char ch, prev;
    prev = '\0';

    printf("Enter a text:\n");
    while ((ch = getchar()) != STOP)
    {
        if (prev == 'e' && ch == 'i')
            num++;
        prev = ch;
    }
    printf("%d", num);

    return 0;
}