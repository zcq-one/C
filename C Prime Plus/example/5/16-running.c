#include <stdio.h>

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void)
{
    double distk, distm;    // 跑过的距离（公里，英里为单位）
    double rate;            // 平均速度（英里/小时）
    int time;               // 跑步用时（秒为单位）
    int sec, min;           // 跑步用时（分钟和秒为单位）
    double mtime;           // 跑1英里用时（秒为单位）
    int mmin, msec;         // 跑1英里用时（分钟和秒为单位）

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

    time = S_PER_M * min + sec;     // 把时间转换成秒
    distm = M_PER_K * distk;        // 把公里转换成英里
    rate = distm / time * S_PER_H;  // 英里/秒 X 秒/小时 = 英里/小时
    mtime = (double)time / distm;   // 时间/距离 = 跑1英里用时
    mmin = (int)mtime / S_PER_M;    // 分钟数
    msec = (int)mtime % S_PER_M;    // 剩余秒数

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec, \n", distk, distm, min, sec);
    printf("that pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour averge speed was %1.2f mph.\n", msec, rate);

    return 0;
}