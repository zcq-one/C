/*
    4.ʹ��if else����дһ�������ȡ���룬����#ֹͣ��
    �ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻��
*/

#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int repalce = 0;

    printf("Enter a text:\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == '.')
        {
            putchar('!');
            repalce++;
        }
        else if (ch == '!')
        {
            printf("!!");
            repalce++;
        }
        else
            putchar(ch);
    }
    printf("\n%d", repalce);

    return 0;
}