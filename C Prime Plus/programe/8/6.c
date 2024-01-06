/*
    6.�޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�1���ǿհ��ַ�������һ���򵥵ĳ����в��ԡ�
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