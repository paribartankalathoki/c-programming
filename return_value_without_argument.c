#include <stdio.h>

int sum();
int main()
{
    printf("The sum is :\t%d",sum());

    return 0;
}

int sum()
{
    int a,b;
    printf("Enter two number:\t");
    scanf("%d%d",&a,&b);

    return a+b;
}
