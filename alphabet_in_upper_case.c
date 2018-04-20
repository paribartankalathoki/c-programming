#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<=26; i++)
    {
        //we use i+96 to display small letter of the alphabet;
        printf("\t%c", i+64);
    }

    return 0;
}
