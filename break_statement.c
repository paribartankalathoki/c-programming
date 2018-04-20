#include<stdio.h>

void main()
{   int i;
    for(i=1; i<=10; i++)
    {
        if(i==4)
        break;
        //continue    this is use to continue only breaking one number 4;
        printf("\n%d",i);
    }
    return  0;
}
