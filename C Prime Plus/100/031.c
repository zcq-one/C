//  题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

#include <stdio.h>
int main(void)
{
    char ch;
    puts("Enter a letter:");
    ch = getchar(); getchar();

    switch (ch) 
    {
        case 'M':
        case 'm': printf("Monday"); break;
        case 'W':
        case 'w': printf("Wednesday"); break;
        case 'F':
        case 'f': printf("Friday"); break;
        case 'T':
        case 't': 
        {
            printf("Enter next character: ");
            if (((ch = getchar()) == 'u') || ((ch = getchar()) == 'U'))
                printf("Tuesday");
            if (((ch = getchar()) == 'h') || ((ch = getchar()) == 'H'))
                printf("Thursday");
        }; break;
        case 'S':
        case 's':
        {
            printf("Enter next character: ");
            if (((ch = getchar()) == 'u') || ((ch = getchar()) == 'U'))
                printf("Sunday");
            if (((ch = getchar()) == 'a') || ((ch = getchar()) == 'A'))
                printf("Saturday");
        }
    }

    return 0;
}