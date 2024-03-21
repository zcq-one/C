//  题目：求一个3*3矩阵对角线元素之和

#include <stdio.h>
int main(void)
{
    int sum = 0;
    int num[3][3] = {0};
    printf("请输入矩阵(3*3)：\n");

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