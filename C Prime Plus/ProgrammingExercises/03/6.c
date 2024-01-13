/*
    6.1个水分子的质量约为3.0×10^?23 克。1夸脱水大约是950克。
    编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/

#include <stdio.h>
#define hydrone 3.0e-23
#define quart_hydrone 950

int main(void)
{
    double quart;

    printf("Enter number of quart of water: ");
    scanf("%lf", &quart);

    printf("The number of water molecules is: %g", quart * (quart_hydrone / hydrone));

    return 0;
}