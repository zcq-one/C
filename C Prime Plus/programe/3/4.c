/*
    4.��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��Ȼ�����ϵͳ֧�֣��ٴ�ӡ��p������
    ����ʮ�����Ƽ��������������¸�ʽ�����ʵ����ʾ��ָ��λ����ϵͳ���죩��
        Enter a floating-point��value:��64.25
        fixed-point��notation:��64.250000
        exponential��notation:��6.425000e+01
        p notation:��0x1.01p+6
*/

#include <stdio.h>
int main(void)
{
    float num;

    printf("Enter a floating-point number value: ");
    scanf("%f", &num);

    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}