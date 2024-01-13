/*
    11.ABC 邮购杂货店出售的洋蓟售价为 2.05 美元/磅，甜菜售价为 1.15 美元/磅，胡萝卜售价为 1.09美元/磅。
    在添加运费之前，100美元的订单有5%的打折优惠。
        少于或等于5磅的订单收取6.5美元的运费和包装费，
        5磅～20磅的订单收取14美元的运费和包装费，
        超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
    编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，
    即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q 是退出订购。
    程序要记录累计的重量。即，如果用户输入 4 磅的甜菜，然后输入 5磅的甜菜，程序应报告9磅的甜菜。
    然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
    随后，程序应显示所有的购买信息：
        物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
*/

#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define WEIGHT1 5
#define WEIGHT2 20
#define FREIGHT1 6.5
#define FREIGHT2 14
#define OVER_PER 0.5
#define DISCOUNT_PRICE 100
#define DISCOUNT_RATE 0.05

void printmenu(void)
{
    printf("***********************************************************\n");
    printf("    a.artichoke         b.beet       c.carrot\n");
    printf("    q.quit\n");
    printf("***********************************************************\n");
}

int main(void)
{
    char choose;
    double weight;   // 变量传递的中间值
    double aweight, bweight, cweight, all_weight, acost, bcost, ccost, all_cost, discount, freight, total;
//  订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额
    aweight = bweight = cweight = all_weight = acost = bcost = ccost = all_cost = discount = freight = total = 0.0f;

    while (1)
    {
        printmenu();
        do{
            printf("请输入菜单选项: ");
            scanf(" %c", &choose);
        }while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'q');

        if (choose == 'q')
            break;

        printf("How many pounds do you want: ");
        scanf("%lf", &weight);

        switch (choose)
        {
            case 'a': aweight += weight; break;
            case 'b': bweight += weight; break;
            case 'c': cweight += weight; break;
            default :                    break;
        }

        do {
            printf("是否继续购买（输入 p 继续；输入 q 退出）： ");
            scanf(" %c", &choose);
        }while ((choose != 'p') && (choose != 'q'));
        if (choose == 'p')
        {
            putchar('\n');
            continue;
        }
        else
            break;
    }

    acost += ARTICHOKE * aweight;
    bcost += BEET * bweight;
    ccost += CARROT * cweight;
    all_cost += (acost + bcost + ccost);
    all_weight += (aweight + bweight + cweight);
    discount = (all_cost > DISCOUNT_PRICE) ? all_cost * DISCOUNT_RATE : 0.0;

    if (all_weight == 0.0)
        freight = 0.0;
    else if (all_weight <= WEIGHT1)
        freight = FREIGHT1;
    else if (all_weight <= WEIGHT2)
        freight = FREIGHT2;
    else
    {
        all_weight = ((int)all_weight - all_weight == 0) ? all_weight : (int)all_weight + 1;
        freight = FREIGHT2 + (all_weight - WEIGHT2) * OVER_PER;
    }

    total = all_cost + freight - discount;

    printf("You bought %g pounds artichoke, it cost $%g.\n", aweight, acost);
    printf("You bought %g pounds beet, it cost $%g.\n", bweight, bcost);
    printf("You bought %g pounds carrot, it cost $%g.\n", cweight, ccost);
    printf("The all weight is %gpounds and all cost is $%g\n", all_weight, all_cost);
    printf("Your discount is $%g and freight is $%g\n", discount, freight);
    printf("You need to pay $%g in total\n",total);

    return 0;
}