/*
    ��Ŀ����ҵ���ŵĽ������������ɡ�

    ����(I)���ڻ����10��Ԫʱ���������10%��
    �������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
    20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
    40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
    60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
    ����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
    �Ӽ������뵱������I����Ӧ���Ž���������

    ����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ������˫���ȸ���(double)�͡�
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