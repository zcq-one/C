/*
    3.��дһ��������ʾ�û�����������Ȼ����ת����������������
    ���磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
        18 days are 2 weeks, 4 days.
    ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20����ѭ��������
*/

#include <stdio.h>
#define WEEK_DAYS 7

int main(void)
{
    int days, weeks, drest;
    printf("Enter days(<= 0 to quit): ");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / WEEK_DAYS;
        drest = days - weeks * WEEK_DAYS;
        printf("%d days is %d weeks and %d days.\n", days, weeks, drest);

        printf("Enter days(<= 0 to quit): ");
        scanf("%d", &days);
    }
    printf("Done!\n");

    return 0;
}