/*
    4.编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
        Dabney, you are 6.208 feet tall
    使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。
*/

#include <stdio.h>
int main(void)
{
    float heigh;
    char name[30];

    printf("Enter your high(inch) and name:\n");
    scanf("%f %[^\n]", &heigh, &name);

    printf("%s, you are %.3f feet tall.\n", name, heigh / 12.0);

    return 0;
}