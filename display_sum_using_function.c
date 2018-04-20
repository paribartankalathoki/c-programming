#include <stdio.h>

int sum(int, int);
int main()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d", &a,&b);
    c= sum(a,b);

    printf("The sum is :\t%d",c);
    return 0;
}
int sum(int x, int y)
{
    int r;
    r=x+y;
    return r;
}
