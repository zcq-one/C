/*
    4.ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
        A
        BC
        DEF
        GHIJ
        KLMNO
        PQRSTU
    ������ϵͳ��ʹ��������˳�����Ĵ��룬�������ϰ3�ķ��������
*/

#include <stdio.h>
int main(void)
{
    char ch = 'A';

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%c", ch++);
        putchar('\n');
    }
    return 0;
}