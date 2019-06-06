#include <stdio.h>
struct student
{
     char name[20];
     int roll;
     float m1,m2,m3,m4,m5,m6,total,avr,per;
}s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%[^\n]s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("\nPlease Enter Your Marks in The Following Subjects??\n");
    printf("\nBasic Computer Architecture :\t\t\t");
    scanf("%f",&s.m1);
    printf("\nC Programming Language :\t\t\t");
    scanf("%f",&s.m2);
    printf("\nDiscrete Mathematics :\t\t\t\t");
    scanf("%f",&s.m3);
    printf("\nBusiness English :\t\t\t\t");
    scanf("%f",&s.m4);
    printf("\nMathematics :\t\t\t\t\t");
    scanf("%f",&s.m5);
    printf("\nInternet Fundamental & Applications :\t\t");
    scanf("%f",&s.m6);


    printf("\n\n\n\t\t\tYour Mark Sheet As Follows :\n\n");

    printf("\nName: ");
    puts(s.name);
    printf("\t\t\t\t\tRoll number: %d",s.roll);

    printf("\n------------------------------------------------------------------------------\n");

    printf("\nBasic Computer Architecture :\t\t\t %.2f\n",s.m1);

    printf("\nC Programming Language :\t\t\t %.2f\n",s.m2);

    printf("\nDiscrete Mathematics :\t\t\t\t %.2f\n",s.m3);

    printf("\nBusiness English :\t\t\t\t %.2f\n",s.m4);

    printf("\nMathematics :\t\t\t\t\t %.2f\n",s.m5);

    printf("\nInternet Fundamental & Applications :\t\t %.2f\n",s.m6);

     printf("\n------------------------------------------------------------------------------\n");

    s.total = ((float)((s.m1)+(s.m2)+(s.m3)+(s.m4)+(s.m5)+(s.m6)));

     printf("Total Marks : %.1f%",s.total);

    s.avr= ((float)s.total)/6;
    printf("\t\t\t\tAverage marks = %.1f\n\n", s.avr);

    s.per = ((float)s.total/600*100);
    printf("Total Percentage :  %.2f%%",&s.per);

    if(s.per>=40)
        printf("\t\t\tStatus : Pass\n\n");
    else
        printf("\t\t\tStatus : Fail\n\n");


    return 0;
}
