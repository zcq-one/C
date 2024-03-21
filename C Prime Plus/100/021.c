/**
 * 题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，
 * 又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。
 * 求第一天共摘了多少。
*/

#include <stdio.h>
int main(void)
{
    int peaches = 1;
    for (int days = 9; days > 0 ; days--)
    {
        peaches = (peaches + 1) * 2;
    }

    printf("Initial value: %d\n", peaches);
    return 0;
}