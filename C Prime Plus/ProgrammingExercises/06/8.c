/*
    8.��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ�������û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��
*/

#include <stdio.h>
int main(void)
{
    float a, b;
    printf("Enter two floating-point numbers:\n");

    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("ANSWER: %g\n", (a-b)/(a*b));
        printf("Enter two floating-point numbers:\n");
    } 
    printf("Done!\n");
    return 0;
}