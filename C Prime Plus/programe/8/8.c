/*
    8.编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。
    获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。
    该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。
    进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。
    该程序的一个运行示例如下：
        Enter the operation of your choice:
        a. add        s. subtract
        m. multiply   d. divide
        q. quit
        a
        Enter first number: 22.4
        Enter second number: one
        one is not a number.
        Please enter a number, such as 2.5, -1.78E8, or 3: 1
        22.4 + 1 = 23.4
        Enter the operation of your choice:
        a. add        s. subtract
        m. multiply   d. divide
        q. quit
        d
        Enter first number: 18.4
        Enter second number: 0
        Enter a number other than 0: 0.2
        18.4 / 0.2 = 92
        Enter the operation of your choice:
        a. add        s. subtract
        m. multiply   d. divide
        q. quit
        q
        Bye.
*/

#include <stdio.h>

void menu(void);
double get_double(void);

int main(void)
{
    char choose;
    double first, second;


    while (1)
    {
        menu();
        while(
                (choose = getchar())
                &&
                !(choose == 'a' || choose == 's' || choose == 'm' || choose == 'd' || choose == 'q')
             )
        {
            while (getchar() != '\n')
                continue;
            printf("Enter the operation of your choice:\n");
        }

        if (choose == 'q')
            break;

        printf("Enter first number: ");
            first = get_double();
        printf("Enter second number: ");
            second = get_double();

        while ((choose == 'd') && (second == 0.0))
        {
            printf("0 should not be a divisor\n");
            printf("Enter a number other than 0: ");
            second = get_double();
        }

        switch (choose)
        {
            case 'a':   printf("%g + %g = %g\n", first, second, first + second);  break;
            case 's':   printf("%g - %g = %g\n", first, second, first - second);  break;
            case 'm':   printf("%g * %g = %g\n", first, second, first * second);  break;
            case 'd':   printf("%g / %g = %g\n", first, second, first / second);  break;
            default:                                                              break;
        }
    }
    printf("Finish!\n");
    return 0;
}

void menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add        s. subtract\n");
    printf("m. multiply   d. divide\n");
    printf("q. quit\n");
}

double get_double(void)
{
    double input;
    char ch;

    while (scanf("%lf", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\nPlease enter a number: ");
    }
    getchar();      //正确读取后残留一个 '\n'。
    return input;
}