/*
    1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表符、换行符），把结果储存在一个数组里，它的地址被传递作为一个参数。
*/
#include <stdio.h>

char * get_char(char * st, int n);

int main(void)
{
    const int LENGTH = 81;
    char str[LENGTH];

    printf("Enter %d characters:\n", LENGTH -1);
    get_char(str, LENGTH);
    printf("The charaters you put is %s\n", str);

    return 0;
}

char * get_char(char * st, int n)
{
    for (int i = 0; st[i] != EOF && i < n - 1; i++)
        st[i] = getchar();
    st[n - 1] = '\0';

    return st;
}