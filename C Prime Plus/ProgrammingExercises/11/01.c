/*
    1.��Ʋ�����һ���������������л�ȡ��n���ַ��������հס��Ʊ�������з������ѽ��������һ����������ĵ�ַ��������Ϊһ��������
*/
#include <stdio.h>

char * get_char(char * st, int n);

int main(void)
{
    const int LENGTH = 81;
    char str[LENGTH];

    printf("Enter %d characters:\n", LENGTH -1);
    get_char(str, LENGTH);
    printf("The charaters you put is %s\n", str);

    return 0;
}

char * get_char(char * st, int n)
{
    for (int i = 0; st[i] != EOF && i < n - 1; i++)
        st[i] = getchar();
    st[n - 1] = '\0';

    return st;
}