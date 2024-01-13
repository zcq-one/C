/*
    4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，允许有小数部分。
    程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
        Enter　a　height　in　centimeters:　182
        182.0　cm　=　5　feet,　11.7　inches
        Enter　a　height　in　centimeters　(<=0　to　quit):　168.7
        168.0　cm　=　5　feet,　6.4　inches
        Enter　a　height　in　centimeters　(<=0　to　quit):　0
        bye
*/

#include <stdio.h>
#define FEET_CM 30.48
#define INCH_CM 2.54

int main(void)
{  
    int feet;
    float cm, restcm, inch;
    printf("Enter a height in centimeters(<=0 to quit): ");
    scanf("%f", &cm);

    while (cm > 0)
    {
        feet = cm / FEET_CM;
        restcm = cm - feet * FEET_CM;
        inch = restcm / INCH_CM;

        printf("%.1f cm = %d feet, %.1f inch\n", cm, feet, inch);

        printf("Enter a height in centimeters(<=0 to quit): ");
        scanf("%f", &cm);
    }
    printf("bye\n");

    return 0;
}