/*
    6.1��ˮ���ӵ�����ԼΪ3.0��10^?23 �ˡ�1����ˮ��Լ��950�ˡ�
    ��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������
*/

#include <stdio.h>
#define hydrone 3.0e-23
#define quart_hydrone 950

int main(void)
{
    double quart;

    printf("Enter number of quart of water: ");
    scanf("%lf", &quart);

    printf("The number of water molecules is: %g", quart * (quart_hydrone / hydrone));

    return 0;
}