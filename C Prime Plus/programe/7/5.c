//  5. π”√switch÷ÿ–¥¡∑œ∞4°£

#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int repalce = 0;

    printf("Enter a text:\n");
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                repalce++;
                break;
            case '!':
                printf("!!");
                repalce++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("\n%d", repalce);

    return 0;
}