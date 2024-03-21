/*
    题目：输入某年某月某日，判断这一天是这一年的第几天？
    程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include <stdio.h>

int LeapYear(int year);

int main(void)
{
    int year, month, day, total;
    printf("Enter year, month, day:\n");
    scanf("%d %d %d", &year, &month, &day);

    switch (month)
    {
        case 1:     total = 0;      break;
        case 2:     total = 31;     break;
        case 3:     total = 59;     break;
        case 4:     total = 90;     break;
        case 5:     total = 120;    break;
        case 6:     total = 151;    break;
        case 7:     total = 181;    break;
        case 8:     total = 212;    break;
        case 9:     total = 243;    break;
        case 10:    total = 273;    break;
        case 11:    total = 304;    break;
        case 12:    total = 334;    break;
    }
    total += day + (month >= 3 ? LeapYear(year) : 0);

    printf("NO.%d\n", total);

    return 0;
}

int LeapYear(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 != 0 && year % 4 == 0)
        return 1;
    else
        return 0;
}