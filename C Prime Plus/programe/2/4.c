/*
    4.��дһ�������������������
        For��he's��a��jolly��good��fellow!
        For��he's��a��jolly��good��fellow!
        For��he's��a��jolly��good��fellow!
        Which��nobody��can��deny!
    ���� main()�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊ jolly()�����ڴ�ӡ
    ǰ 3 ����Ϣ������һ�δ�ӡһ������һ��������Ϊdeny()����ӡ���һ����Ϣ��
*/

#include <stdio.h>

void jolly(void)
{
    printf("For he's a jolly good felow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}