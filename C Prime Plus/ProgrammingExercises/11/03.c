/**
 * 3.��Ʋ�����һ����������һ�������а�һ�����ʶ���һ�������У��������������е������ַ���
 * �ú���Ӧ��������1���ǿհ��ַ�ǰ������пհס���һ�����ʶ���Ϊû�пհס��Ʊ�����з����ַ����С�
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