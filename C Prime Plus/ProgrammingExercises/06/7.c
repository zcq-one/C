/*
    7.��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
    ��ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±ꡣ
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    for (unsigned i = strlen(word) - 1; i >= 0; i--)
        printf("%c", word[i]);
    putchar('\n');

    return 0;
}