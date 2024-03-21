//  题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

#include <stdio.h>
#include <string.h>

char * DeleteCharacter(char* source, const char* st);

int main(void)
{
    char arr[] = "Hello, my name is abcde.";
    char * source = arr;
    char * st = "e";

    printf("%s", DeleteCharacter(source, st));
    return 0;
}

char * DeleteCharacter(char * source, const char * st)
{
    int i, j;
    int length = strlen(source);

    for (i = 0; i < length; i++)
    {
        if (*(source + i) == *(st))
        {
            for (j = i + 1; *(source + j) == *st && j < length; j++);

            if (j >= length)
                break;
            else
            {
                *(source + i) = *(source + j);
                *(source + j) = *st;
            }
        }
    }

    for (i = 0; i < length; i++)
        if (*(source + i) == *st)
            *(source + i) = '\0';

    return source;
}