//  花括号的使用

#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;                        // 死循环
    printf("Done!\n");

    return 0;
}