/**
 * 题目：打印出如下图案（菱形）。
 *       *
 *      ***
 *     *****
 *    *******
 *     *****
 *      ***
 *       *
*/

#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 4; i++)
    {
        for (int spaces = 1; spaces <= 4 - i; spaces++)
            putchar(' ');
        for (int cahracters = 1; cahracters <= 2 * i - 1; cahracters++)
            putchar('*');

        putchar('\n');
    }


    for (int i = 3; i >= 1; i--)
    {
        for (int spaces = 1; spaces <= 3 - i + 1; spaces++)
            putchar(' ');
        for (int cahracters = 1; cahracters <= 2 * i - 1; cahracters++)
            putchar('*');

        putchar('\n');
    }

    return 0;
}