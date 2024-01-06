/*
    3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
    例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
        18 days are 2 weeks, 4 days.
    通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20），循环结束。
*/

#include <stdio.h>
#define WEEK_DAYS 7

int main(void)
{
    int days, weeks, drest;
    printf("Enter days(<= 0 to quit): ");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / WEEK_DAYS;
        drest = days - weeks * WEEK_DAYS;
        printf("%d days is %d weeks and %d days.\n", days, weeks, drest);

        printf("Enter days(<= 0 to quit): ");
        scanf("%d", &days);
    }
    printf("Done!\n");

    return 0;
}