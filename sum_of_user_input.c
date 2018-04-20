#include<stdio.h>

int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
            //to display the sum of the even number we use i=i+2;

        sum=sum+i;
    }

    printf("\nthe sum is = %d",sum);


    return 0;
}
