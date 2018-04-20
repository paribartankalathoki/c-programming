#include <stdio.h>

void main()
{
    int num, temp, digit, sum = 0;

    printf("Enter the number : \t");
    scanf("%d", &num);
    temp = num;
    while (num!=0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("\nGiven number = \t%d\n", temp);
    printf("\nSum of the digits %d = \t%d\n", temp, sum);
}
