//  1.��дһ��������ʾ�û����������գ�Ȼ���ԡ���,�ա��ĸ�ʽ��ӡ������

#include <stdio.h>
int main(void)
{
    char first[30], last[30];

    printf("Enter your first name:\n");
    scanf("%s", first);
    printf("Enter your last name:\n");
    scanf("%s", last);

    printf("Hello! %s %s.", first, last);

    return 0;
}