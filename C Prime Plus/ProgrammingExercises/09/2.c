//  2.���һ������chline(ch, i, j)����ӡָ�����ַ�j��i�С���һ���򵥵����������в��Ըú�����

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
    for (int n = j; n > 0; n--)
    {
        for (int m = i; m > 0; m--)
            putchar(ch);
        putchar('\n');
    }
}