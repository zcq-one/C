//  ָ�����飬�ַ�������

#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "stashing data",
        "Following instrucions to the letter",
        "Understanding the C lauguage"
    };
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping", "watching television",
        "Mailing letters", "reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s  %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

    return 0;
}