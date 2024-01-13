/*
    16.Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。
    Deirdre以 5%的复合利息投资了 100 美元（也就是说，利息是当前余额的 5%，包含之前的利息）。
    编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
*/

#include <stdio.h>
int main(void)
{
    int year;
    double m1, m2;
    m1 = m2 = 100,0;

    for (year = 1; m1 >= m2; year++)
    {
        m1 += 100 * 0.1;
        m2 += 0.05 * m2;
    }
    printf("No.%d year, m1 < m2, m1 = $%g, m2 = $%g\n", year - 1, m1, m2);

    return 0;
}