#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000U;
    short end = 200;
    long big = 65537L;
    long long verybig = 1234567890642LL;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybih = %lld and not %ld\n", verybig, verybig);

    return 0;
}