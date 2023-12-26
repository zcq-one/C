#include <stdio.h>
int main(void)
{
    float aboat = 32000.0f;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);

    printf("And it's %a in nexadecimal, powers of 2 notation\n");
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}