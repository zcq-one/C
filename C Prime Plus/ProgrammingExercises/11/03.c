/**
 * 3.设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
 * 该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
*/

#include <stdio.h>
#include <ctype.h>

void get_word(char * st);

int main(void)
{
    const int LIMIT = 81;
    char word[LIMIT];

    printf("Enter maximum of %d cahraters:\n", LIMIT - 1);
    get_word(word);
    printf("The first word you put is");
    puts(word);

    return 0;
}

void get_word(char * st)
{
    
}