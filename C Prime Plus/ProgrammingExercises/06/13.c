/*
    13.编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
    使用for循环设置数组元素的值，使用do while循环显示数组元素的值。
*/

#include <stdio.h>
int main(void)
{
    int arr[8], times;
    times = 0;

    do
    {
        int product = 1;
        for (int i = 0; i <= times; i++)
            product *= 2;

        arr[times] = product;
        printf("%4d", arr[times++]);
    } while (times < 8);
    
}