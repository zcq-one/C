//  1.编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。

#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int space, enter, others;
    space = enter = others = 0;

    printf("Enter a text:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            enter++;
        else
            others++;
    }
    printf("space = %d\nenter = %d\nothers = %d\n", space, enter, others);

    return 0;
}