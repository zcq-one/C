/*
    5.�޸ĳ���addemup.c�������嵥5.13�����������Ϊaddemup.c�Ǽ���20����׬����Ǯ�ĳ��򣨼����1��׬$1����2��׬$2����3��׬$3���Դ����ƣ���
    �޸ĳ���ʹ��������û������������û�����������м��㣨�����ö����һ������������20����
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