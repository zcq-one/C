/*
    3.��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
    ������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
        a.����21.3��2.1e+001��
        b.����+21.290��2.129E+001��
*/

#include <stdio.h>
int main(void)
{
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("a.����%.1f��%.1e\n", num, num);
    printf("b.����%+.3f��%.3E\n", num, num);

    return 0;
}