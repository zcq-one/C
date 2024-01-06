/*
    7.1英寸相当于2.54厘米。
    编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
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