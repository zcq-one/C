/*
    题目：企业发放的奖金根据利润提成。

    利润(I)低于或等于10万元时，奖金可提10%；
    利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
    20万到40万之间时，高于20万元的部分，可提成5%；
    40万到60万之间时高于40万元的部分，可提成3%；
    60万到100万之间时，高于60万元的部分，可提成1.5%；
    高于100万元时，超过100万元的部分按1%提成。
    从键盘输入当月利润I，求应发放奖金总数？

    程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。
*/

#include <stdio.h>

#define FIRST_GEAR  100000
#define SECOND_GEAR 200000
#define THIRD_GEAR  400000
#define FOURTH_GEAR 600000
#define FIFTH_GEAR  1000000

#define FIRST_ROYALTY_RATE  0.1
#define SECOND_ROYALTY_RATE 0.075
#define THIRD_ROYALTY_RATE  0.05
#define FOURTH_ROYALTY_RATE 0.03
#define FIFTH_ROYALTY_RATE  0.015
#define SIXTH_ROYALTY_RATE  0.001

#define BONUS_FIRST     (FIRST_GEAR * FIRST_ROYALTY_RATE)
#define BONUS_SECOND    (BONUS_FIRST + (SECOND_GEAR - FIRST_GEAR) * SECOND_ROYALTY_RATE)
#define BONUS_THIRD     (BONUS_SECOND + (THIRD_GEAR - SECOND_GEAR) * THIRD_ROYALTY_RATE)
#define BOUNS_FOURTH    (BONUS_THIRD + (FOURTH_GEAR - THIRD_GEAR) * FOURTH_ROYALTY_RATE)
#define BONUS_FIFTH     (BOUNS_FOURTH + (FIFTH_GEAR - FOURTH_GEAR) * FIFTH_ROYALTY_RATE)

int main(void)
{
    double I, bonus;
    printf("Enter the monthly profit: ");
    scanf("%lf", &I);

    if (I <= FIRST_GEAR)
        bonus = I * FIRST_ROYALTY_RATE;
    else if (I <= SECOND_GEAR)
        bonus = BONUS_FIRST + (I - FIRST_GEAR) * SECOND_ROYALTY_RATE;
    else if (I <= THIRD_GEAR)
        bonus = BONUS_SECOND + (I - SECOND_GEAR) * THIRD_ROYALTY_RATE;
    else if (I <= FOURTH_GEAR)
        bonus = BONUS_THIRD + (I - THIRD_GEAR) * FOURTH_ROYALTY_RATE;
    else if (I <= FIFTH_GEAR)
        bonus = BOUNS_FOURTH + (I - FOURTH_GEAR) * FIFTH_ROYALTY_RATE;
    else
        bonus = BONUS_FIFTH + (I - FIFTH_GEAR) * SIXTH_ROYALTY_RATE;

    printf("The total bonus money is %lf\n", bonus);
    return 0;
}