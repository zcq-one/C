/*
    5.��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
    ������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š�
    �ó���Ҫ������ĸ�ʽ��ӡ 3 ��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
        At 18.12 megabits per second, a file of 2.20 megabytes
        downloads in 0.97 seconds.
*/

#include <stdio.h>
int main(void)
{
    float Mb, MB, time;
    printf("Enter Mb/s, MB: ");
    scanf("%f %f", &Mb, &MB);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", Mb, MB);
    printf("download in %.2f seconds.", MB * 8 / Mb);

    return 0;
}