#include <stdio.h>

int main()
{
    int a[]={22,35,65,45,34};
    int *p;
    int i;
    p=a;
    for(i=0;i<5; i++)
    {
        printf("\n%d",*(p+i));
    }

    return 0;
}
