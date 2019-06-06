#include<stdio.h>

int main()
{
    int i,j,a[2][2]={2,3,4,5};
    printf("Enter element of matrix are follows:\n");

    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            printf("\t%d",a[i][j]);

        }
        printf("\n");
    }
    return 0;

}
