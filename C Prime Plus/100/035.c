//  ��Ŀ���ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��

#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[100];
    printf("Enter a string: \n");
    scanf("%[^\n]", string);

    for (int i = strlen(string) - 1; i >= 0; i--)
        putchar(string[i]);

    return 0;
}