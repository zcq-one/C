/*
    4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。
    该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。
    实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    char prev = '\n';
    int words = 0;
    int letters = 0;
    bool inword = false;

    printf("Enter a text:\n");

    while ((ch = getchar()) != EOF)
    {
        if (isalnum(ch) && inword == false)
        {
            inword = true;
            words++;
        }
        if (!isalnum(ch) && inword == true)
            inword = false;
        if (inword == true)
            letters++;
        prev =ch;
    }
    printf("words = %d, average character count = %g", words, (double)letters / (double)words);
    
    return 0;
}