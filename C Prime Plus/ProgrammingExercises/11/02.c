/*
    2.�޸Ĳ������ϰ1�ĺ�������n���ַ���ֹͣ�����ڶ�����1���հס��Ʊ�����з�ʱֹͣ���ĸ��������ĸ�ֹͣ������ֻʹ��scanf()��
*/

#include <stdio.h>
#include <ctype.h>

char * get_char(char * st, int n);

int main(void)
{
    const int LENGTH = 81;
    char str[LENGTH];

    printf("Enter %d characters:\n", LENGTH - 1);
    get_char(str, LENGTH);
    printf("The charaters you put is\n");
    puts(str);

    return 0;
}

char * get_char(char * st, int n)
{
    int i = 0;
    while (isspace(st[i] = getchar()) == 0 && i < n - 1)
        i++;
    st[i] = '\0';

    return st;
}