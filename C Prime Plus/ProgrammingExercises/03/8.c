/*
    8.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
    编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
    思考对于该程序，为何使用浮点类型比整数类型更合适？
*/

#include <stdio.h>

#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void)
{
    float cup;
    printf("Enter number of cup: ");
    scanf("%f", &cup);

    printf("pint: %g\n", cup / PINT_CUP);
    printf("cup: %g\n", cup);
    printf("ounce: %g\n", cup * CUP_OUNCE);
    printf("spoon: %g\n", cup * CUP_OUNCE * OUNCE_SPOON);
    printf("tea: %g\n", cup * CUP_OUNCE * OUNCE_SPOON * SPOON_TEA);

    return 0;
}