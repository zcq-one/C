//  分号位置

#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n++ < 3);            // 没有循环
        printf("n = %d\n", n);
    printf("That's all!");

    return 0;
}