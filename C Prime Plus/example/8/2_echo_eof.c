#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
//  EOF��\n + CTRL + Z
        putchar(ch);

    return 0;
}