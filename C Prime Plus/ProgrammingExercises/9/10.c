/*
    10.为了让程序清单9.8中的to_binary()函数更通用，
    编写一个to_base_n()函数接受两个在2～10范围内的参数，然后以第2个参数中指定的进制打印第1个参数的数值。
    例如，to_base_n(129， 8)显示的结果为201，也就是129的八进制数。在一个完整的程序中测试该函数。
*/

#include <stdio.h>
void to_binary(unsigned long n, int scale);

int main(void)
{
    int scale;
    unsigned long number;
    printf("Enter a integer and scale(q to quit):\n");
    while(scanf("%lu%d", &number, &scale) == 2)
    {
        printf("Binary equivalent: ");
        to_binary(number, scale);
        putchar('\n');
        printf("Enter a integer (q to quit):\n");
    }
    printf("Done!\n");
    return 0;
}

void to_binary(unsigned long n, int scale)
{
    int r;

    r = n % scale;
    if (n >= scale)
        to_binary(n / scale, scale);
    printf("%lu", r);
}