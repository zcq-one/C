/**
 * ��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ��,������;
 *       �����ڵ�10�����ʱ�������������ף���10�η�����ߣ�
*/

#include <stdio.h>
int main(void)
{
    double down, up, all;
    down = 100.0;
    up = all = 0.0;

    for (int i = 1; i <= 10; i++)
    {
        all += down;
        up = down / 2;
        all += up;
        down = up;
    }

    printf("��10����ع�������%lf��\n����10�η���%lf��\n", all - up, up);

    return 0;
}