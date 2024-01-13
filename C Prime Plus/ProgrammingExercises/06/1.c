// 1.编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容。

#include <stdio.h>
int main(void)
{
    char arr[26];

    for (int i = 0; i < 26; i++)
        arr[i] = 'a' + i;

    for (int j = 0; j < 26; j++)
        printf("%c", arr[j]);

    return 0;
}