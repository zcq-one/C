//  Ñ­»·ºÍÎ²µÝ¹é¼ÆËã½×³Ë

#include <stdio.h>
long fact(int n);
long refact(int n);
int main(void)
{
    int num;

    printf("This program caculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit): \n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, refact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit): \n");
    }

    printf("Bye!\n");
    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}

long refact(int n)
{
    long ans = 1;

    if (n > 1)
        ans = n * refact(n - 1);

    return ans;
}