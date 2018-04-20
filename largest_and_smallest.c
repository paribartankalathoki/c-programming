#include<stdio.h>

int main()
{
    int a[4], i;

    int smallest,largest;
    for(i=0; i<4; i++)
    {
        printf("enter the number:\t");
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0; i<4; i++)
    {
        if(a[i]<smallest)
            smallest=a[i];
    }
     printf("\nthe smallest number is :\t%d",smallest);

     largest=a[0];
     for(i=0; i<4; i++)
    {
        if(a[i]>largest)
            largest=a[i];
    }
     printf("\nthe greatest number is :\t%d",largest);
    return 0;
}
