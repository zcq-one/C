//  ��Ŀ����һ��3*3����Խ���Ԫ��֮��

#include <stdio.h>
int main(void)
{
    int sum = 0;
    int num[3][3] = {0};
    printf("���������(3*3)��\n");

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);

            if (i == j)
                sum += num[i][j];
        }
    printf("sum = %d", sum);
    return 0;
}