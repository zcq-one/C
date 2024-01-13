//  2.编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。

#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a ASCII number: ");
    scanf("%d", &num);
    printf("The charater is %c\n", num);

    return 0;
}