/*
    8.���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1�����׵���3���ס�
    ��дһ��������ʾ�û����뱭��������Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������
    ˼�����ڸó���Ϊ��ʹ�ø������ͱ��������͸����ʣ�
*/

#include <stdio.h>

#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void)
{
    float cup;
    printf("Enter number of cup: ");
    scanf("%f", &cup);

    printf("pint: %g\n", cup / PINT_CUP);
    printf("cup: %g\n", cup);
    printf("ounce: %g\n", cup * CUP_OUNCE);
    printf("spoon: %g\n", cup * CUP_OUNCE * OUNCE_SPOON);
    printf("tea: %g\n", cup * CUP_OUNCE * OUNCE_SPOON * SPOON_TEA);

    return 0;
}