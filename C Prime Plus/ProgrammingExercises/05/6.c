/*
    6.�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬$1����2��׬$4����3��׬$9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ�����������ǿ�����n * n����ʾn��ƽ����
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
        sum += count * count;

    printf("sum = $%ld\n", sum);

    return 0;
}