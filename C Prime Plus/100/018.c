/**
 * ��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
 * ����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
*/

#include <stdio.h>
int main(void)
{
    int figure, number;
    long sum = 0;
    printf("Enter figure and number:\n");
    scanf("%d %d", &figure, &number);

    for (int i = figure; number > 0; number--)
    {
        sum += figure;
        i *= 10;
        figure += i;
    }

    printf("sum = %ld", sum);

    return 0;
}