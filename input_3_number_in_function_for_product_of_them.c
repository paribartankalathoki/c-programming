#include <stdio.h>

int mul(int a, int b,int c);

int main()
{
    int a,b,c,pro;
    printf("Enter any three number:\t ");
    scanf("%d%d%d", &a,&b,&c);
    pro=mul(a,b,c);
    printf("the product is %d",pro);

    return 0;
}
int mul(int a,int b,int c)
{
    int r;
    r = a*b*c;
    return r;
}
