/*
    2.��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10���������������磬�û�����5�����ӡ5��15����������������5��15����
    Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
*/

#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a integer: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
        printf("%d \r\n", num + i);

    return 0;
}