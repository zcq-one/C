/**
 * ��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
 * �ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������
*/

#include <stdio.h>
int main(void)
{
    char a, b, c;

    for (c = 'x'; c <= 'z'; c++)
        if (c != 'x' && c != 'z')
            break;

    for (a = 'x'; a <= 'z'; a++)
        if(a != c && a != 'x')
            break;

    for (b = 'x'; b <= 'z'; b++)
        if (b != a && b != c)
            break;

    printf("a -- %c\nb -- %c\nc -- %c\n", a, b, c);
    return 0;
}