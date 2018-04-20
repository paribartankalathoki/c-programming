#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpt;
         char ch[20];
        char add[20];
       fpt=fopen("record.txt","a+");
   /* printf("Enter the name:");
    scanf("%s",s.ch);
    printf("Enter the address:");
    scanf("%s",s.add);

    fprintf(fpt,"\n%s",s.ch);
    fprintf(fpt,"\n%s",s.add);*/
while(!feof(fpt)){fscanf(fpt,"\n%s",ch);
fscanf(fpt,"\n%s",add);
printf("\n%s\t%s",ch,add);}
    fclose(fpt);

    return 0;
}
