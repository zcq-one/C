/*
    12.考虑下面两个无限序列：
        1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
        1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
    编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1 相乘
    得-1，偶数个-1相乘得1。让用户交互地输入指定的次数，当用户输入0或负值时结束输
    入。查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
*/

#include <stdio.h>
int main(void)
{
    int flag;
    unsigned long times;
    double den, sum1, sum2;

    printf("Enter loop times: ");

    while (scanf("%lu", &times) == 1)
    {
        flag = 1;
        den = 1.0;
        sum1 = sum2 = 0.0;

        for (unsigned long i = 1; i <= times; i++)
        {
            sum1 += 1.0 / den;
            sum2 += flag * (1 / den);

            den += 1.0;
            flag *= -1;
        }
        printf("Sum1 = %lf\nSum2 = %lf\n", sum1, sum2);

        printf("Enter loop times again: ");
    }
    printf("Done!\n");
    return 0;
}