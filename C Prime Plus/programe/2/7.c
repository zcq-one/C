#include <stdio.h>

void smile(void)
{
    printf("Smile!");
}

int main(void)
{
    smile(); smile(); smile(); putchar('\n');
    smile(); smile(); putchar('\n');
    smile();

    return 0;
}