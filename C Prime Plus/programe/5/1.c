/*
    1.��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
    ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
    ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
*/

#include <stdio.h>
#define H_PER_M 60

int main(void)
{
    int minutes, hours, mrest;
    printf("Enter minutes(<= 0 to quit): ");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        hours = minutes / H_PER_M;
        mrest = minutes - hours * H_PER_M;
        printf("%d minutes is %d hours and %d minutes.\n", minutes, hours, mrest);

        printf("Enter minutes(<= 0 to quit): ");
        scanf("%d", &minutes);
    }
    printf("Done!\n");

    return 0;
}