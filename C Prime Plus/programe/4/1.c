//  1.编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。

#include <stdio.h>
int main(void)
{
    char first[30], last[30];

    printf("Enter your first name:\n");
    scanf("%s", first);
    printf("Enter your last name:\n");
    scanf("%s", last);

    printf("Hello! %s %s.", first, last);

    return 0;
}