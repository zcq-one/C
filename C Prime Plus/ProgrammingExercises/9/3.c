/*
    3.��дһ������������3��������һ���ַ��������������ַ������Ǵ���ӡ���ַ�����1������ָ��һ���д�ӡ�ַ��Ĵ�������2������ָ����ӡָ���ַ�����������дһ�����øú����ĳ���
*/

#include <stdio.h>
int main(void)
{
    void chline(char ch, int i, int j);

    char ch;
    int i, j;
    printf("Enter ch, j, i:\n");
    scanf("%c %d %d", &ch, &j, &i);
    chline(ch, i, j);

    return 0;

}

void chline(char ch, int i, int j)
{
    for (int n = i; n > 0; n--)
    {
        for (int m = j; m > 0; m--)
            putchar(ch);
        putchar('\n');
    }
}