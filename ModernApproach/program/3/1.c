/*
     1. 编写一个程序，以月/日/年（即mm/dd/yy）的格式接受用户输入的日期信息，并以年月日（即yyyymmdd）的格式将其显示出来：
        Enter a date (mm/dd/yyyy): 2/17/2011
        You entered the date 20110217
*/
#include <stdio.h>
int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf(" %d/ %d/ %d", &month, &day, &year);

    printf("You entered the date %4d%.2d%2d", year, month, day);

    return 0;
}