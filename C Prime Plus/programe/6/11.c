// 11.��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������

#include <stdio.h>
int main(void)
{
    int num[8];
    printf("enter eight numbers: \n");

    for (int i = 0; i < 8; i++)
        scanf("%d", &num[i]);

    for (int i = 7; i >= 0; i--)
        printf("%5d", num[i]);

    return 0;
}