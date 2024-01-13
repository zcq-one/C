/*
    8.��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣�û�������������ǵ�1��������󡣵��û�����һ������ֵʱ����������������ʾ�����£�
        This��program��computes��moduli.
        Enter��an��integer��to��serve��as��the��second��operand:��256
        Now��enter��the��first��operand:��438
        438��%��256��is��182
        Enter��next��number��for��first��operand��(<=��0��to��quit):��1234567
        1234567��%��256��is��135
        Enter��next��number��for��first��operand��(<=��0��to��quit):��0
        Done
*/

#include <stdio.h>
int main(void)
{
    long first, second;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%ld", &second);
    printf("Now enter the first operand: ");
    scanf("%ld" ,&first);

    while (first > 0)
    {
        printf("%ld %% %ld = %d\n", first, second, first % second);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%ld", &first);
    }
    printf("bye\n");

    return 0;
}