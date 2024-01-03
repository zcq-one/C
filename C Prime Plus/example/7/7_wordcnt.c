//  ͳ���ַ�����������������

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void)
{
    char ch;                // �����ַ�
    char prev;              // ����ǰ��һ���ַ�
    long n_chars = 0L;      // �ַ���
    int n_lines = 0;        // ����
    int n_words = 0;        // ������
    int p_lines = 0;        // ������������
    bool inword = false;    // ���ch�ڵ����У�inword����true

    printf("enter text to be analyzed (| to terminate):\n");
    prev = '\n';            // ����ʶ����������
    while ((ch = getchar()) != STOP)
    {
        n_chars++;          // ͳ���ַ�
        if (ch == '\n')
            n_lines++;      // ͳ����
        if (!isspace(ch) && !inword)
        {
            inword = true;  // ��ʼһ���µ���
            n_words++;      // ͳ�Ƶ���
        }
        if (isspace(ch) && inword)
            inword = false; // �ﵽ����ĩβ
        prev = ch;          // �����ַ�ֵ
    }

    if (prev != '\n')
        p_lines = 1;

    printf("characters = %ld, words = %d, lines = %ld, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}