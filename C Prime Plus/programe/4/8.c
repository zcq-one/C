/*
    8.��дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�������һλ���֡���������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ����������ʾ�������ʾС������� 1 λ���֡�ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�ȼ�ϲ���������ֵԽ��Խ�ã���
    ʹ��#define �������ų�����ʹ�� const �޶���������������ʾ����ת��ϵ����
*/

#include <stdio.h>
#define GALLON_LITRE 3.785
#define MILE_KM 1.609
int main(void)
{
    float mile, gallon;
    printf("Enter mile and gallon: \n");
    scanf("%f %f", &mile, &gallon);

    printf("%.1f miles/gallon\n", mile / gallon);

    printf("%.1f L/100KM\n",
            (gallon * GALLON_LITRE) / (mile * MILE_KM) * 100);

    return 0;
}