#include <stdio.h>
int main()
{
    int n,s,i,sum=0;
    printf("How many number do you want?\t");
    scanf("%d",&n);

    printf("Enter the %d number :",n);

    for(i=1;i<=n;i++)
        {
            scanf("%d",&s);
            sum=sum+s;
        }
        printf("The sum of %d number is:\t%d",n,sum);

    return 0;
}
