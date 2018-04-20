#include <stdio.h>

void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    int a,b;
    printf("Enter two number:\t");
    scanf("%d%d", &a,&b);

    printf("The sum is :\t%d",a+b);
}
