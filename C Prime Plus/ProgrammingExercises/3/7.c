/*
    7.1Ӣ���൱��2.54���ס�
    ��дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�
*/

#include <stdio.h>
#define inch_to_cm 2.54

int main(void)
{
    float inches;

    printf("Enter your height(inch): ");
    scanf("%f", &inches);

    printf("Your height is %g inches, or %g cm.", inches, inches * inch_to_cm);

    return 0;
}