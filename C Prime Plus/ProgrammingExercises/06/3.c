/*
    3.ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
        F
        FE
        FED
        FEDC
        FEDCB
        FEDCBA
    ע�⣺������ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬���԰��ַ������
    ʼ��Ϊ��ĸ���е���ĸ��
        char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    Ȼ���������±�ѡ�񵥶�����ĸ������lets[0]�ǡ�A�����ȵȡ�
*/

#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%c", 'F' - j);
        printf("\n");
    }
    return 0;
}