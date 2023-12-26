/*
        1.编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。再调用一次 printf()函数，把你的姓名分别打印
    在两行。然后，再调用两次printf()函数，把你的姓名打印在一行。
*/

#include <stdio.h>
int main(void)
{
    printf("Gustav Mahler\n");

    printf("Gustav\nMahler\n");

    printf("Gustav ");
    printf("Mahler");

    return 0;
}