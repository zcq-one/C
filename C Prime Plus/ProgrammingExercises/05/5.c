/*
    5.修改程序addemup.c（程序清单5.13），你可以认为addemup.c是计算20天里赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推）。
    修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，用读入的一个变量来代替20）。
*/

#include <stdio.h>
int main(void)
{
    long count, sum, days;
    count = 0;
    sum = 0;
    printf("Enter days: ");
    scanf("%ld",&days);

    while(count++ < days)
        sum += count;

    printf("sum = $%ld\n", sum);

    return 0;
}