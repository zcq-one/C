/*
    3.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。
    该程序要报告输入中的大写字母和小写字母的个数。
    假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。
*/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int upper, lower;
        upper = lower = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper++;
        if (islower(ch))
            lower++;
    }
    printf("upper = %d, ;ower = %d\n", upper, lower);
    return 0;
}