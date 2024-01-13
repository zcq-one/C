//  6.��дһ����������double���������е����ݵ������У�����һ���򵥵ĳ����в��Ըú�����

#include <stdio.h>

void show_arr(double const source[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5g", source[i]);
    putchar('\n');
}

void change_arr(double const source[], int n)
{
    double change[n];

    for (int i = 0; i < n; i++)
        change[n - i - 1] = source[i];

    show_arr(change, n);
}

int main(void)
{
    double source[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 5.5};

    printf("Soure array is:\n");
    show_arr(source, 6);

    printf("After change, array is:\n");
    change_arr(source, 6);

    return 0;
}