#include <stdio.h>

struct student{
    char nam[10];
    int clas;
    float height;
}s;

int main()
{
    int display(char *, int, float);

   struct student s={"Ravi",4,5.6};
    display(s.nam,s.clas,s.height);

    return 0;
}
int display(char *nam,int clas,float height)
{
    printf("\n%s,%d,%2f",nam,clas,height);
}
