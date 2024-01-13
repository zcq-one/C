/*
    1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
    使用#define或const创建一个表示60的符号常量或const变量。
    通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
*/

#include <stdio.h>
#define H_PER_M 60

int main(void)
{
    int minutes, hours, mrest;
    printf("Enter minutes(<= 0 to quit): ");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        hours = minutes / H_PER_M;
        mrest = minutes - hours * H_PER_M;
        printf("%d minutes is %d hours and %d minutes.\n", minutes, hours, mrest);

        printf("Enter minutes(<= 0 to quit): ");
        scanf("%d", &minutes);
    }
    printf("Done!\n");

    return 0;
}