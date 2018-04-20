#include <stdio.h>

int main()
{
    FILE *fpt;
    char ch[30];
    fpt=fopen("Text_add.txt","w");

    puts("Enter the text:");
    gets(ch);

    fputs(ch,fpt);

    fclose(fpt);

    return 0;

}
