#include <stdio.h>

int gre (int a, int b);

int main()
{
    int a,b;
    printf("Enter two number:\t");
    scanf("%d%d", &a,&b);

    printf("\nThe greatest number is %d",gre(a,b));

    return 0;
}

int gre(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
