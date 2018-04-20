#include <stdio.h>

struct student{
    char nam[20];
    int clas;
}s,*pt;

int main()
{
    pt =&s;

    printf("enter the name:\t");
    gets(pt -> nam);
    printf("enter the class:\t");
    scanf("%d",&pt -> clas);
    printf("\n\n%s\t%d",pt ->nam,pt->clas);

    return 0;
}
