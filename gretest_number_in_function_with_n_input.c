#include <stdio.h>
int gre(int a[],int i);
int main()
{
    int a[100],n,i;

    printf("How many number do you want?\t");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the number:\t");
        scanf("%d",&a[i]);
    }
    printf("The greatest number is %d",gre(a,n));

    return 0;
}

int gre(int a[],int n)
{
    int g =a[0], i;
    for(i=0; i<n; i++)
    {
        if(a[i]>g)
        {
            g=a[i];
        }
    }
    return g;
}
