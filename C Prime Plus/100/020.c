/**
 * 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半,再落下;
 *       求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

#include <stdio.h>
int main(void)
{
    double down, up, all;
    down = 100.0;
    up = all = 0.0;

    for (int i = 1; i <= 10; i++)
    {
        all += down;
        up = down / 2;
        all += up;
        down = up;
    }

    printf("第10次落地共经过：%lf米\n，第10次反弹%lf米\n", all - up, up);

    return 0;
}