//  字符串断行

#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");

    printf("Here's another way to print a \
long string.\n");   //  / 和 Enter 组合来断行，下一行代码从最左边开始。

    printf("Here's the newest way to print a "
           "long string.\n");

    return 0;
}