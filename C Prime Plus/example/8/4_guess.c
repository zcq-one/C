/*
    问题版
#include <stdio.h>
int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess it\n");
    printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y')
        printf("Well, then, is it %d?\n", ++guess);
    printf("I knew I could do it!\n");

    return 0;
}
*/

//  完善版
#include <stdio.h>
int main(void)
{
    char response;
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess it\n");
    printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);

    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y or n.\n");
        
        while (getchar() != '\n')
            continue;
    }

    return 0;
}