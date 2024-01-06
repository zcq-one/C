/*
    6.修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。
*/
#include <stdio.h>
#include <ctype.h>

char get_first(void)
{
    char ch;

    while ((ch = getchar()) && isspace(ch))
        continue;

    while (getchar() != '\n')
        continue;
    
    return ch;
}

int main(void)
{
    printf("Enter a sentence that ends with the enter key, and I'll return the first non-whitespace character:\n");
    putchar(get_first());
    
    return 0;
}