//  题目：输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>
int main(void)
{
    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);

    if (x > y)  { temp = x; x = y; y = temp; }
    if (x > z)  { temp = x; x = z; z = temp; }
    if (y > z)  { temp = y; y = z; z = temp; }

    printf("x = %d  y = %d  z = %d\n", x, y, z);
    return 0;
}