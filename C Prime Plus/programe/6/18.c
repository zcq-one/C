/*
    18.Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。
    第1周少了1个朋友，剩下的朋友数量翻倍；第2周少了2个朋友，剩下的朋友数量翻倍。
    一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。
    编写一个程序，计算并显示Rabnud博士每周的朋友数量。
    该程序一直运行，直到超过邓巴数（Dunbar’snumber）。
    邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150。
*/

#include <stdio.h>
#define DUNBAR_NUMBER 150
int main(void)
{
    int weeks = 1, friends = 5;

    while (friends <= DUNBAR_NUMBER)
    {
        friends -= weeks++;
        friends *= 2;
    }
    printf("%d", weeks - 1);

    return 0;
}