/**
 * 5.��Ʋ�����һ��������������1�������β�ָ�����ַ����������в��ҵ�2�������β�ָ�����ַ��״γ��ֵ�λ�á�
 * ����ɹ����ú�����ָ����ַ���ָ�룬������ַ�����δ�ҵ�ָ���ַ����򷵻ؿ�ָ�루�ú����Ĺ����� strchr()������ͬ����
 * ��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
*/

#include <stdio.h>
#include <string.h>
#define SIZE 81

char * strchar(char * st, int c);

int main(void)
{
    char st[SIZE];
    char c;

    while (1)
    {
        printf("Enter a line string and a character:\n");
        scanf("%s %c", st, &c);

        for (int i = 0; i < strlen(st); i++)
            printf("%p\n", &st[i]);
        printf("The %c is in %p\n", c, strchar(st, c));
    }

    return 0;
}

char * strchar(char * st, int c)
{
    while (*st != '\0')
    {
        if (*st == c)
            return st;
        else
            st++;
    }
        

    return NULL;
}