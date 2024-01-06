/*
    2.使用嵌套循环，按下面的格式打印字符：
        $
        $$
        $$$
        $$$$
        $$$$$
*/

#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("$");
        putchar('\n');
    }
    return 0;
}