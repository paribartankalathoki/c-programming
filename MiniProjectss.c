#include <stdio.h>
struct student
{
    char nam[20], add[20];
}s;
void add_rec(struct student s)
{
    FILE *fp;
    fp=fopen("project.txt","a");
    printf("Enter the name:\t");
    scanf("%s",s.nam);
    printf("Enter the address:\t");
    scanf("%s",s.add);

    fprintf(fp,"\n%s",s.nam);
    fprintf(fp,"\t\t%s",s.add);
    fclose(fp);
}
void dis_rec(struct student s)
{
    FILE *fp;
    fp=fopen("project.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"\n%s",s.nam);
        fscanf(fp,"\t\t%s",s.add);
        printf("\n%s\t\t%s",s.nam,s.add);
    }
    fclose(fp);
}
int main()
{
    int choice;
    do{
        printf("\n*****MENUS*****\n\n");
        printf("\n 1.Add Record\n 2.Display Record\n 3.EXIT");
        printf("\n Enter your choice:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                add_rec(s);
                break;
            case 2:
                dis_rec(s);
                break;
        }
      }while(choice<3);
      return 0;
}
