#include<stdio.h>

int main()
{
    int i,n,a=1,b=0,f=1;

    printf("\nEnter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("\t %d",f);
        a=b;
        b=f;

        f=a+b;
    }
    return 0;
}
