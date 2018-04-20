#include <stdio.h>

#include<string.h>

void main()
{
    char str[100],temp;
    int i,j=0;
    printf("Enter the string:\t");
    gets(str);

    i=0;
    j=strlen(str)-1;

    while(i<j)
    {
        temp= str[i];
        str[i]= str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("The reverse string is:\t%s",str);
}
