/*
    4.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ��
    �ó���Ҫ����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��
    ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô�ࣨ�����Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct()��������
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