/**
 * ��Ŀ���� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
 * ��������������ڰ�λ��ʮλ����λ�����ֶ��� 1��2��3��4��������е����к���ȥ�����������������С�
*/

#include <stdio.h>
int main(void)
{
    int count = 0;

    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            for (int k = 1; k <= 4; k++)
                if (i != j && i != k && j != k)
                {
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }
    printf("%d\n", count);
    return 0;
}