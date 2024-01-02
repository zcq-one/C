//  C语言中的真或假

#include <stdio.h>
int main(void)
{
    int true_value, false_value;

    true_value = (10 > 2);
    false_value = (10 == 2);
    printf("true = %d; false = %d\n", true_value, false_value);

    return 0;
}