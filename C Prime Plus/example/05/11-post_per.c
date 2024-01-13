#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, per_b;

    a_post = a++;
    per_b = ++b;

    printf("a a_post     b   per_b\n");
    printf("%1d %6d %5d %7d\n", a, a_post, b, per_b);

    return 0;
}