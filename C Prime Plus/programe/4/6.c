/*
    6.��дһ����������ʾ�û���������Ȼ����ʾ�û������ա���һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ������ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
        Melissa Honeybee
              7��������8
    ���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬������ʾ��
        Melissa Honeybee
        7������ 8
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[30], last[30];

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);

    printf("%s %s\n%*d %*d\n", first, last, strlen(first), strlen(first),strlen(last), strlen(last));
    printf("%s %s\n%-*d %-*d\n", first, last, strlen(first), strlen(first),strlen(last), strlen(last));

    return 0;
}