/*
    2.��дһ�������ȡ���룬����#�ַ�ֹͣ��
    ����Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���һ�д�ӡ8���ַ���
    ����:ʹ���ַ���������ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���
*/

#include <stdio.h>
int main(void)
{
    char ch;
    int letters = 0;

    printf("Enter a text (# to quit):\n");
    while ((ch = getchar()) != '#')
    {
        letters++;
        if (ch == '\n')
            printf(" \\n--%-3d", ch);
        else if (ch == '\t')
            printf(" \\t--%-3d", ch);
        else
            printf("%3c--%-3d", ch, ch);

        if (letters % 8 == 0)
            putchar('\n');
    }

    return 0;
}