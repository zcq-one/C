//  ��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

#include <stdio.h>
int main(void)
{
    int digit[5] = {0};
    int number;
    printf("Enter a five digits number: ");
    scanf("%5d", &number);

    for (int i = 0; i < 5; i++)
    {
        digit[5 - i - 1] = number % 10;
        number = (number - (number % 10)) / 10;
    }

    if (digit[0] == digit[4] && digit[1] == digit[3])
        puts("Yes!");
    else
        puts("No!");

    return 0;
}