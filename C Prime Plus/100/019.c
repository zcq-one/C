//  ��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������

#include <stdio.h>
#define LIMIT 1000
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= LIMIT; i++, sum = 0)
    {
        for (int j = 1; j < i; j++)
            if (i % j == 0)
                sum += j;

        if (sum == i)
            printf("%d\n", i);
    }

    return 0;
}

