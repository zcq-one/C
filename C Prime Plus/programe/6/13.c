/*
    13.��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
    ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��
*/

#include <stdio.h>
int main(void)
{
    int arr[8], times;
    times = 0;

    do
    {
        int product = 1;
        for (int i = 0; i <= times; i++)
            product *= 2;

        arr[times] = product;
        printf("%4d", arr[times++]);
    } while (times < 8);
    
}