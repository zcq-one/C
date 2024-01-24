/*
    2.修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()。
*/

#include <stdio.h>
#include <ctype.h>

char * get_char(char * st, int n);

int main(void)
{
    const int LENGTH = 81;
    char str[LENGTH];

    printf("Enter %d characters:\n", LENGTH - 1);
    get_char(str, LENGTH);
    printf("The charaters you put is\n");
    puts(str);

    return 0;
}

char * get_char(char * st, int n)
{
    int i = 0;
    while (isspace(st[i] = getchar()) == 0 && i < n - 1)
        i++;
    st[i] = '\0';

    return st;
}