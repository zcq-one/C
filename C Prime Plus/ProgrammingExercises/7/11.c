/*
    11.ABC �ʹ��ӻ�����۵����ۼ�Ϊ 2.05 ��Ԫ/��������ۼ�Ϊ 1.15 ��Ԫ/�������ܲ��ۼ�Ϊ 1.09��Ԫ/����
    ������˷�֮ǰ��100��Ԫ�Ķ�����5%�Ĵ����Żݡ�
        ���ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�
        5����20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�
        ����20���Ķ�����14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ��
    ��дһ��������ѭ������switch���ʵ���û����벻ͬ����ĸʱ�в�ͬ����Ӧ��
    ������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ��ܲ��İ�����q ���˳�������
    ����Ҫ��¼�ۼƵ���������������û����� 4 ������ˣ�Ȼ������ 5������ˣ�����Ӧ����9������ˡ�
    Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ�ѡ�
    ��󣬳���Ӧ��ʾ���еĹ�����Ϣ��
        ��Ʒ�ۼۡ���������������λ���������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ
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
    double weight;   // �������ݵ��м�ֵ
    double aweight, bweight, cweight, all_weight, acost, bcost, ccost, all_cost, discount, freight, total;
//  ��������������λ���������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ�
    aweight = bweight = cweight = all_weight = acost = bcost = ccost = all_cost = discount = freight = total = 0.0f;

    while (1)
    {
        printmenu();
        do{
            printf("������˵�ѡ��: ");
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
            printf("�Ƿ������������ p ���������� q �˳����� ");
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