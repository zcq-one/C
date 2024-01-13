//  switch

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give you an animal name\n");
    printf("beginning withe the letter.\n");
    printf("Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;;
        if (islower(ch))
            switch (ch)
            {
                case 'a': printf("argali, awild sheep of Asia\n");
                          break;
                case 'b': printf("babirusa, a wild pig of Malay\n");
                          break;
                case 'c': printf("coati, racoonlike mammal\n");
                          break;
                default:  printf("That's a stumper!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");

        while ((ch = getchar()) != '\n')
            continue;
        
        printf("Please type another letter or a #.\n");
    }
    printf("Done.\n");
    return 0;
}