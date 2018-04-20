#include <stdio.h>

int main()
{
    int a[10],s,i;
    for(i=0; i<=4; i++)
    {
        printf("Enter the number:\t");
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0; i<=4; i++)
    {
        if(a[i]<s)
        s=a[i];
    }
    printf("The smallest number is: \t%d",s);
    return 0;
}
