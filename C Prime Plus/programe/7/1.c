//  1.��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������

#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int space, enter, others;
    space = enter = others = 0;

    printf("Enter a text:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            enter++;
        else
            others++;
    }
    printf("space = %d\nenter = %d\nothers = %d\n", space, enter, others);

    return 0;
}