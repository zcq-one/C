/*
    4.��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
        Dabney, you are 6.208 feet tall
    ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������
*/

#include <stdio.h>
int main(void)
{
    float heigh;
    char name[30];

    printf("Enter your high(inch) and name:\n");
    scanf("%f %[^\n]", &heigh, &name);

    printf("%s, you are %.3f feet tall.\n", name, heigh / 12.0);

    return 0;
}