/*
    3.编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指定字符的行数。编写一个调用该函数的程序。
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