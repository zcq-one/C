//  ��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include <Stdio.h>
int main(void)
{
    int number[5] = {0};
    int digits, num;
    digits = num = 0;
    printf("Enter a number smaller five digits: ");
    scanf("%d", &num);

    for (int i = 0; num != 0; i++)
    {
        digits++;

        number[i] = num % 10;
        num = (num - number[i]) / 10;
    }

    for (int i = 0; i < digits; i++)
    {
        num = num * 10 + number[i];
    }

    printf("digits: %d\ninverted order: %d\n", digits, num);
    return 0;
}