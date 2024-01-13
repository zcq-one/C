//  2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。

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