/*
    10.��дһ������Ҫ���û�����һ������������һ��������������������޵����޷�Χ������������ƽ���ͣ�����ʾ��������Ȼ����������ʾ�û��������޺���������������ʾ�����ֱ���û��������������С����������Ϊֹ��
    ���������ʾ�����£�
        Enter��lower��and��upper��integer��limits:��5��9
        The��sums��of��the��squares��from��25��to��81��is��255
        Enter��next��set��of��limits:��3��25
        The��sums��of��the��squares��from��9��to��625��is��5520
        Enter��next��set��of��limits:��5��5
        Done
*/

#include <stdio.h>

int main(void)
{
    int upper, lower;
    printf("Enter lower and upper integer limits: ");

    while((scanf("%d %d", &lower, &upper) == 2) && (lower != upper))
    {
        long sum = 0;

        for ( ; lower <= upper; lower++)
            sum += lower * lower;

        printf("The sums of the squares from %ld to %ld is %ld\n",
                lower*lower, upper*upper, sum);

        printf("Enter next set of limits: ");
    }
    printf("Done!\n");

    return 0;
}