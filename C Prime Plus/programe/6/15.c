/*
    15.��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ������
    ���԰����봢����char���͵������У�����ÿ���ַ�������255��
    ����һ�£�����%cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ����������û�����Enter��ʱscanf()����������һ�������ַ���\n����
*/

#include <stdio.h>
int main(void)
{
    int num = 0;
    char arr[255];

    printf("Enter a sentance:\n");
    while (scanf("%c", &arr[num]) == 1 && arr[num] != '\n')
        num++;

    for (num--; num >= 0; num--)
        printf("%c", arr[num]);

    return 0;
}