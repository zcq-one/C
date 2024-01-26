/**
 * 5.设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形参指定的字符首次出现的位置。
 * 如果成功，该函数返指向该字符的指针，如果在字符串中未找到指定字符，则返回空指针（该函数的功能与 strchr()函数相同）。
 * 在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
*/

#include <stdio.h>
#include <string.h>
#define SIZE 81

char * strchar(char * st, int c);

int main(void)
{
    char st[SIZE];
    char c;

    while (1)
    {
        printf("Enter a line string and a character:\n");
        scanf("%s %c", st, &c);

        for (int i = 0; i < strlen(st); i++)
            printf("%p\n", &st[i]);
        printf("The %c is in %p\n", c, strchar(st, c));
    }

    return 0;
}

char * strchar(char * st, int c)
{
    while (*st != '\0')
    {
        if (*st == c)
            return st;
        else
            st++;
    }
        

    return NULL;
}