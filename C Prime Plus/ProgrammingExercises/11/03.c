/**
 * 3.��Ʋ�����һ����������һ�������а�һ�����ʶ���һ�������У��������������е������ַ���
 * �ú���Ӧ��������1���ǿհ��ַ�ǰ������пհס���һ�����ʶ���Ϊû�пհס��Ʊ�����з����ַ����С�
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