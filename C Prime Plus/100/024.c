//  ��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

#include <stdio.h>
int main(void)
{
    double molecule, denominator, sum;
    molecule = denominator = 1.0;
    sum = 0.0;

    for (int items = 1; items <= 20; items++)
    {
        molecule = molecule + denominator;
        denominator = molecule - denominator;
        sum += molecule / denominator;
    }

    printf("%lf", sum);

    return 0;
}