//  5.一年大约有3.156×10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。

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