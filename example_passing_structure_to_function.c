#include <stdio.h>
#include <string.h>
struct student{
    char nam[20];
    int clas;
    float height;
}s;
int main()
{
    int display(struct student s);
    printf("enter the  name:\t");
    gets(s.nam);
    printf("enter the class:\t");
    scanf("%d",&s.clas);
    printf("enter the height:\t");
    scanf("%f",&s.height);

    display(s);

    return 0;
}

int display(struct student s)
{
    printf("%s,%d,%f",s.nam,s.clas,s.height);
}
