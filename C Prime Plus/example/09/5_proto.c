//  ʹ�ú���ԭ��

#include <stdio.h>
int imax(int, int);

int main(void)
{
    printf("The maxinum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maxinum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}

int imax(int n, int m)
{
    return (n > m) ? n : m;
}