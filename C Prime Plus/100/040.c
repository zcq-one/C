//  题目：将一个数组逆序输出。

#include <stdio.h>
#define LENGTH 10
int main(void)
{
    int temp;
    int arr[LENGTH] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < LENGTH / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[LENGTH - i - 1];
        arr[LENGTH - i - 1] = temp;
    }

    for (int i = 0; i < LENGTH; i++)
        printf("%6d", arr[i]);
    return 0;
}