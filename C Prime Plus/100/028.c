/**
 * ��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
 * �ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
*/

#include <stdio.h>

int recursion(int n);
int main(void)
{
    printf("%d", recursion(5));
    return 0;
}

int recursion(int n)
{
    return ((n == 1) ? 10 : recursion(n - 1) + 2);
}