/*
    8.��дһ�����򣬵���һ����Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one�����ٵ��õ�2������two()��Ȼ������һ��
��ӡ���ʡ�three����two()������һ����ʾ���ʡ�two����main()�����ڵ��� one_three()����ǰҪ��ӡ���starting now:��������
������Ϻ���ʾ���done!������ˣ��ó�������Ӧ������ʾ��
        starting��now:
        one
        two
        three
        done!
*/

#include <stdio.h>

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("Done!\n");

    return 0;
}