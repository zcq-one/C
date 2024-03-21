//  题目：输出9*9口诀。

#include <stdio.h>
int main(void)
{
    for (int x = 1; x <= 9; x++)
    {
        for (int y = 1; y <= x; y++)
            printf("%d * %d = %-04d", x, y, x * y);

        putchar('\n');
    }

    return 0;
}