#include<stdio.h>

int main()
{
    int i;
    int sum ;
    sum = 0;
    for(i = 1; i<=10; i++)
    {
        sum = sum +i;
    }
    printf("The sum of 1 to 10 is = %d ",sum);
    return 0;
}
