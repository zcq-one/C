/**
 * 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
 * 例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
*/

#include <stdio.h>
int main(void)
{
    int figure, number;
    long sum = 0;
    printf("Enter figure and number:\n");
    scanf("%d %d", &figure, &number);

    for (int i = figure; number > 0; number--)
    {
        sum += figure;
        i *= 10;
        figure += i;
    }

    printf("sum = %ld", sum);

    return 0;
}