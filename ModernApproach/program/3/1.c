/*
     1. ��дһ����������/��/�꣨��mm/dd/yy���ĸ�ʽ�����û������������Ϣ�����������գ���yyyymmdd���ĸ�ʽ������ʾ������
        Enter a date (mm/dd/yyyy): 2/17/2011
        You entered the date 20110217
*/
#include <stdio.h>
int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf(" %d/ %d/ %d", &month, &day, &year);

    printf("You entered the date %04d%02d%02d", year, month, day);
    /*                           %.4d%.2d%.2d   */

    return 0;
}