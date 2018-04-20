#include <stdio.h>

int main()
{
    FILE *fpt;
    char nam[20];
    char add[20];
    fpt=fopen("data.txt","r");
    while(!feof(fpt))
        {
            fscanf(fpt,"\n%s",nam);
            fscanf(fpt,"\t\t%s",add);

            printf("\n%s",nam);
            printf("\t%s",add);
        }
        fclose(fpt);

    return 0;
}
