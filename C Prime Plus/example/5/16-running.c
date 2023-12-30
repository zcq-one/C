#include <stdio.h>

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void)
{
    double distk, distm;    // �ܹ��ľ��루���Ӣ��Ϊ��λ��
    double rate;            // ƽ���ٶȣ�Ӣ��/Сʱ��
    int time;               // �ܲ���ʱ����Ϊ��λ��
    int sec, min;           // �ܲ���ʱ�����Ӻ���Ϊ��λ��
    double mtime;           // ��1Ӣ����ʱ����Ϊ��λ��
    int mmin, msec;         // ��1Ӣ����ʱ�����Ӻ���Ϊ��λ��

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please ebter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the sdeconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;     // ��ʱ��ת������
    distm = M_PER_K * distk;        // �ѹ���ת����Ӣ��
    rate = distm / time * S_PER_H;  // Ӣ��/�� X ��/Сʱ = Ӣ��/Сʱ
    mtime = (double)time / distm;   // ʱ��/���� = ��1Ӣ����ʱ
    mmin = (int)mtime / S_PER_M;    // ������
    msec = (int)mtime % S_PER_M;    // ʣ������

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec, \n", distk, distm, min, sec);
    printf("that pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour averge speed was %1.2f mph.\n", msec, rate);

    return 0;
}