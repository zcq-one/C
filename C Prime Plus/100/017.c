//  ��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int letters, spaces, numbers, others;
    letters = spaces = numbers = others = 0;

    printf("Please enter a line characters:\n");

    while ((ch = getchar()) && ch != '\n')
    {
        if (isalpha(ch))
            letters++;
        else if (isspace(ch))
            spaces++;
        else if (isdigit(ch))
            numbers++;
        else
            others++;
    }

    printf("letters = %d\nnumbers = %d\nspaces = %d\nothers = %d",
            letters, numbers, spaces, others);

    return 0;
}