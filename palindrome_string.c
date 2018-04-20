#include<stdio.h>
#include <string.h>
int main()
{
    char string1[20],string2[20];
    printf("Enter the string:\t");
    gets(string1);
    strcpy(string2, string1);
    strrev(string1);

    if(strcmp(string1,string2)==0)
    {
        printf("\n Palindrom");
    }
    else
    {
        printf("\nNot Palindrom");
    }
    return 0;
}
