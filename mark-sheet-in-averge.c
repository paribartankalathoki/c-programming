#include <stdio.h>

int main()
{
     char name[20];
     int rollno;
     float m1,m2,m3,m4,m5,m6,total,avr,per;


    printf("\t\t\tStudent Mark Sheet\n");
    printf("Name of Student : " );
    scanf("%[^\n]s",name);
    printf("\t\t\t\t\t\tRoll No : " );
    scanf("%d",&rollno);
    printf("------------------------------------------------------------------------------\n");

    printf("\nBasic Computer Architecture :\t\t\t");
    scanf("%f",&m1);
    printf("\nC Programming Language :\t\t\t");
    scanf("%f",&m2);
    printf("\nDiscrete Mathematics :\t\t\t\t");
    scanf("%f",&m3);
    printf("\nBusiness English :\t\t\t\t");
    scanf("%f",&m4);
    printf("\nMathematics :\t\t\t\t\t");
    scanf("%f",&m5);
    printf("\nInternet Fundamental & Applications :\t\t");
    scanf("%f",&m6);
     printf("------------------------------------------------------------------------------\n");

    total= ((float)(m1+m2+m3+m4+m5+m6));
    printf("Total Marks : %.1f%\n",total);

    avr= ((float)(m1+m2+m3+m4+m5+m6))/6;
    printf("\t\t\t\t\t\tAverage marks = %.1f\n", avr);

    per = ((float)(m1+m2+m3+m4+m5+m6)/600*100);
    printf("Total Percentage :  %.2f%%\n",per);

    if(per>=40)
        printf("\t\t\t\t\t\tStatus : Pass");
    else
        printf("\t\t\t\t\t\tStatus : Fail");

}
