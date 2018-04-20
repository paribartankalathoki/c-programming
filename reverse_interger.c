#include<stdio.h>
int main()
{
    int num,reverse=0;

    printf("\n Enter the number to reverse:\t");
    scanf("%d",&num);

    while(num!=0)
    {
        reverse = reverse*10;
        reverse=reverse + num%10;
         num= num/10;
    }
    printf("\n The reverse number that you enter is :\t%d",reverse);

    return 0;
}
