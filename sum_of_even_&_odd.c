#include <stdio.h>

void main()
{
    int i, num, odd_sum = 0, even_sum = 0;

    printf("Enter the value of num : \t\a");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = \t\a%d\n", odd_sum);
    printf("Sum of all even numbers =\t\a%d\n", even_sum);
}
