/*
    3.编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
    用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
        a.输入21.3或2.1e+001；
        b.输入+21.290或2.129E+001；
*/

#include <stdio.h>
int main(void)
{
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("a.输入%.1f或%.1e\n", num, num);
    printf("b.输入%+.3f或%.3E\n", num, num);

    return 0;
}