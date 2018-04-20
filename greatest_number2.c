#include<stdio.h>

int main()
{
    int n,i, g=0;

    for (i=1; i<=10; i++)
    {
        printf("Enter the number:\t");
        scanf("%d",&n);

        if(n>g)
            g = n;
    }
    printf("%d is the greatest number.",g);
}
