#include <stdio.h>
int main()
{
    int n,first=0,second=1,next,c;
    printf("Please enter the number:\t");
    scanf("%d",&n);

    printf("\nFirst %d terms of the Fibonacci series are:\n\n",n);

    for(c=0;c<n;c++)
    {
        if(c<=1)
            next=c;
        else
        {
            next=first + second;
            first=second;
            second=next;
        }
        printf("%d\t",next);
    }
    return 0;
}
