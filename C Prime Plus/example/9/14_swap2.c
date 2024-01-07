#include <stdio.h>
void intchange(int u, int v);
int main(void)
{
    int x = 5; int y = 10;

    printf("Originally x = %d and y = %d\n", x, y);
    intchange(x, y);
    printf("Now x = %d and y = %d\n", x, y);
    return 0;
}

void intchange(int u, int v)
{
    int temp;

    printf("Originally x = %d and y = %d\n", u, v);
    temp = u;
    u = v;
    v = u;
    printf("Now x = %d and y = %d\n", u, v);
}