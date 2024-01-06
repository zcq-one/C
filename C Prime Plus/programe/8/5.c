/*
    5.�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ�
    ���磬���������50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ�β²��ֵӦ��50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�
    ʹ�ö��ֲ��ң�binary search�����ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�
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