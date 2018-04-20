#include <stdio.h>

int main()
{
    FILE *fpt;
    char nam[20], add[20];
    fpt=fopen("student_record.txt","a");

    printf("Enter the name:\t");
    scanf("%s",nam);

    printf("Enter your address:\t");
    scanf("%s",add);

    fprintf(fpt,"\n%s",nam);
    fprintf(fpt,"\t\t",add);

    fclose(fpt);

    return 0;

}
