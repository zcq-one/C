/*
    3.��дһ������������ EOF ֮ǰ����������Ϊ�ַ�����ȡ��
    �ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ�����
    �����Сд��ĸ��ֵ�������ġ�����ʹ��ctype.h���к��ʵķ��ຯ�������㡣
*/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int upper, lower;
        upper = lower = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper++;
        if (islower(ch))
            lower++;
    }
    printf("upper = %d, ;ower = %d\n", upper, lower);
    return 0;
}