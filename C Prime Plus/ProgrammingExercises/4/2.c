/*
    2.��дһ��������ʾ�û����������գ���ִ��һ�²�����
    a.��ӡ�����գ�����˫���ţ�
    b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫���ţ�
    c.�ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫���ţ�
    d.�ڱ�������ȿ�3���ֶ��д�ӡ�����ա�
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[30];

    printf("Enter your name:\n");
    scanf("%[^\n]", name);

    printf("a.\"%s\"\n", name);
    printf("b.\"%*s\"\n", 20 - 2, name);
    printf("c.\"%-*s\"\n", 20 - 2, name);
    printf("d.%*s\n", strlen(name) + 3, name);

    return 0;
}