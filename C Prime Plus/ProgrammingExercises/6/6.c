/*
    6.��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������
    Ҫ���û�������������ޡ�ʹ��һ��forѭ����
*/

#include <stdio.h>
int main(void)
{
    int upper, lower;
    printf("Enter lower and upper:\n");
    scanf("%d %d", &lower, &upper);

    for ( ; lower <= upper; lower++)
        printf("%5d%8d%8d\n", lower, lower*lower, lower*lower*lower);
    return 0;
}