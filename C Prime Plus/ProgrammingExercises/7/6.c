/*
    6.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
    ע��:�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award�����������������ԡ�
*/

#include <stdio.h>
#define STOP '#'

int main(void)
{
    int num = 0;
    char ch, prev;
    prev = '\0';

    printf("Enter a text:\n");
    while ((ch = getchar()) != STOP)
    {
        if (prev == 'e' && ch == 'i')
            num++;
        prev = ch;
    }
    printf("%d", num);

    return 0;
}