//  统计字符数、单词数、行数

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void)
{
    char ch;                // 读入字符
    char prev;              // 读入前的一个字符
    long n_chars = 0L;      // 字符数
    int n_lines = 0;        // 行数
    int n_words = 0;        // 单词数
    int p_lines = 0;        // 不完整的行数
    bool inword = false;    // 如果ch在单词中，inword等于true

    printf("enter text to be analyzed (| to terminate):\n");
    prev = '\n';            // 用于识别完整的行
    while ((ch = getchar()) != STOP)
    {
        n_chars++;          // 统计字符
        if (ch == '\n')
            n_lines++;      // 统计行
        if (!isspace(ch) && !inword)
        {
            inword = true;  // 开始一个新单词
            n_words++;      // 统计单词
        }
        if (isspace(ch) && inword)
            inword = false; // 达到单词末尾
        prev = ch;          // 保存字符值
    }

    if (prev != '\n')
        p_lines = 1;

    printf("characters = %ld, words = %d, lines = %ld, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}