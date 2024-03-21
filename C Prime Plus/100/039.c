//  题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include <stdio.h>
#define LIMIT 11
int main(void)
{
    int a[LIMIT] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int num, temp;

    for (int i = 0; i < LIMIT - 1; i++)
        printf("%6d", a[i]);

    printf("\nEnter a new number: ");
    scanf("%d", &num);

    for (temp = 0; a[temp] < num && temp < LIMIT - 1; temp++)
        continue;

    if (temp == LIMIT - 1)
        a[temp] = num;
    else
    {
        for (int i = LIMIT; i > temp; i--)
            a[i] = a[i - 1];
        a[temp] = num;
    }

    for (int i = 0; i < LIMIT; i++)
        printf("%6d", a[i]);

    return 0;
}