#include <stdio.h>
int main()
{

    int n[10],i,j;
    for(i=0;i<10;i++)
    {
        printf("enter the number:\t");
        scanf("%d",&n[i]);
    }
    for(j=0;j<=i;j++)
    {
        printf("The number that you entered is:\t%d\n",n[i]);
    }
    return 0;
}
