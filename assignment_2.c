#include <stdio.h>

int main()
{
    int n[10],i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the number:\t");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\n\t%d",n[i]);
    }
    return 0;

}
