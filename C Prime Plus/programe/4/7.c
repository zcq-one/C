/*
    7.��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������Ϊ1.0/3.0���ֱ���ʾ���μ���Ľ����3�Σ�һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
    float a = 1.0 / 3.0;
    double b = 1.0 / 3.0;

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("a = %.6f\na = %.12f\na = %.16f\n", a, a, a);

    printf("DBL_DIG = %d\n", DBL_DIG);
    printf("b = %.6lf\nb = %.12lf\nb = %.16lf\n", b, b, b);

    return 0;
}