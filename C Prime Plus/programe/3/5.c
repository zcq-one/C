//  5.һ���Լ��3.156��10^7�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������

#include <stdio.h>
#define year_to_seconds 3.156e7
int main(void)
{
    int age;
    printf("Enter your age(integer): ");
    scanf("%d", &age);

    printf("%g seconds", age * year_to_seconds);

    return 0;
}