/**
 * 3.设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
 * 该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LIMIT 81

char * get_a_word(char st[]);

int main(void) {
    char word[LIMIT];
    char * get;

    printf("Enter maximum of %d characters:\n", LIMIT - 1);
    get = get_a_word(word);

    printf("The first word you put is: ");
    puts(get == NULL ? "No word" : word);
}

char * get_a_word(char st[])
{
    int i, j;
    char temp[LIMIT];

    fgets(temp, LIMIT, stdin);

    for (i = 0; i < strlen(temp) && isalpha(temp[i]) == 0; i++)
    {
        if (i == strlen(temp) - 1 && isalpha(temp[i]) == 0)
            return NULL;
        else
            continue;
    }

    for (j = 0; i < strlen(temp) && isalpha(temp[i]) != 0; i++, j++)
        st[j] = temp[i];

    st[j] = '\0';

    return st;
}