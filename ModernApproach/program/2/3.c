//  3. �޸������еĳ���ʹ�û�����������������İ뾶��

#include <stdio.h>
#define PI 3.14f
int main(void)
{
    double r, V;

    printf("Enter r(m): ");
    scanf(" %lf", &r);

    V = (4.0f / 3.0f) * PI *r * r * r;
    printf("V = %.2lfm^3", V);

    return 0;
}