// 1.��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ��Ȼ���ӡ������������ݡ�

#include <stdio.h>
int main(void)
{
    char arr[26];

    for (int i = 0; i < 26; i++)
        arr[i] = 'a' + i;

    for (int j = 0; j < 26; j++)
        printf("%c", arr[j]);

    return 0;
}