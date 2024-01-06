//  1.设计一个程序，统计在读到文件结尾之前读取的字符数。

#include <stdio.h>
int main(void)
{
    char ch;
    int num = 0;

    while ((ch = getchar()) != EOF)
        num++;
    printf("%d\n", num);

    return 0;
}