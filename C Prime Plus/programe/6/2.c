/*
    2.ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ�ַ���
        $
        $$
        $$$
        $$$$
        $$$$$
*/

#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("$");
        putchar('\n');
    }
    return 0;
}