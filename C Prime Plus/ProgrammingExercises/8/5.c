/*
    5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。
    例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。
    使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
*/

#include <stdio.h>
int main(void)
{
    int response;
    float min = 0.0f, guess = 50.0f, max = 100.0f;

    printf("Pick an integer from 1 to 100. I will try to guess it\n");
    printf("Respond with a y if my guess is right, with a b if it is bigger or an s if it is smaller.\n");
    printf("Uh...is your number %g?\n", guess);

    for (float mid; (response = getchar()) != 'y'; )
    {
        if (response == 'b')
        {   mid = guess;
            max = mid;
            guess = (guess + min) / 2;

            printf("Well, then, is it %g?\n", guess);
        }
        else if (response == 's')
        {
            mid = guess;
            min = mid;
            guess = (guess + max) / 2;
            printf("Well, then, is it %g?\n", guess);
        }
        else
            printf("Sorry, I understand only y, b or s.\n");
        
        while (getchar() != '\n')
            continue;
    }
    printf("Fine.\n");
    return 0;
}