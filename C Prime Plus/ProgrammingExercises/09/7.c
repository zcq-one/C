/*
    7.��дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ����ÿ���ַ��Ƿ�����ĸ������ǣ���Ҫ�������ĸ����ĸ���е���ֵλ�á�
    ���磬c��C����ĸ���е�λ�ö���3���ϲ�һ����������һ���ַ���Ϊ������������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻�-1��
*/

#include <stdio.h>
int return_number(char ch);
int main(void)
{
    char ch;

    printf("Enter a text:\n");

    while ((ch = getchar()) != EOF)
        printf("%4d", return_number(ch));
    return 0;
}

int return_number(char ch)
{
    return (ch >= 65 && ch <= 90) ? (ch - 64) : ((ch >= 97 && ch <= 122) ? (ch - 96) : -1);
}