/*
    5.��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ��
            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA
    ��ӡ������ͼ�Σ�Ҫ�����û��������ĸ�����������磬�����ͼ�������û�����E��Ĵ�ӡ�����
    ��ʾ�������ѭ�������У�ÿ��ʹ��3���ڲ�ѭ�����ֱ���ո��������ӡ��ĸ���Խ����ӡ��ĸ��
    ���ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬�������ϰ3�Ľ��������
*/

#include <stdio.h>
#define LAYER 5
int main(void)
{
    for (int i = 0; i < LAYER; i++)
    {
        char letter = 'A';

        for (int j = LAYER - i; j > 1; j--)
            putchar(' ');

        for ( ; letter <= 'A' + i; )
            printf("%c", letter++);

        for (letter--; letter > 'A'; )
            printf("%c", --letter);

        printf("\n");
    }
    return 0;
}