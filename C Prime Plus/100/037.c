//  题目：对10个数进行排序：从小到大。

#include <stdio.h>
int main(void)
{
    int temp;
    int num[10] = {0};
    puts("enter 10 numbers:");

    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < 10; i++)
    {
        temp = num[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    puts("Now:");
    for (int i = 0; i < 10; i++)
        printf("%-6d", num[i]);

    return 0;
}