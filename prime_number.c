#include<stdio.h>

int main()
{
    int i,n,f=0;
     printf("Enter any number n:\t");
     scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            f=f+1;
    }
    if((f==1) || (f==2))
        printf("\n%d is a prime number",n);
    else
        printf("\n%d is not a prime number",n);


    return 0;
}
