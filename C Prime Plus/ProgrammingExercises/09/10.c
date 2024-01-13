/*
    10.Ϊ���ó����嵥9.8�е�to_binary()������ͨ�ã�
    ��дһ��to_base_n()��������������2��10��Χ�ڵĲ�����Ȼ���Ե�2��������ָ���Ľ��ƴ�ӡ��1����������ֵ��
    ���磬to_base_n(129�� 8)��ʾ�Ľ��Ϊ201��Ҳ����129�İ˽���������һ�������ĳ����в��Ըú�����
*/

#include <stdio.h>
void to_binary(unsigned long n, int scale);

int main(void)
{
    int scale;
    unsigned long number;
    printf("Enter a integer and scale(q to quit):\n");
    while(scanf("%lu%d", &number, &scale) == 2)
    {
        printf("Binary equivalent: ");
        to_binary(number, scale);
        putchar('\n');
        printf("Enter a integer (q to quit):\n");
    }
    printf("Done!\n");
    return 0;
}

void to_binary(unsigned long n, int scale)
{
    int r;

    r = n % scale;
    if (n >= scale)
        to_binary(n / scale, scale);
    printf("%lu", r);
}