#include <stdio.h>
struct student
{
    float m1,m2,m3,m4,total,avr,per,Division;
}s;

int main()
{
    printf("Enter information:\n");
    printf("\nPlease Enter Your Marks in The Following Subjects??\n");
    printf("\nBasic Computer Architecture :\t\t\t");
    scanf("%f",&s.m1);
    printf("\nC Programming Language :\t\t\t");
    scanf("%f",&s.m2);
    printf("\nDiscrete Mathematics :\t\t\t\t");
    scanf("%f",&s.m3);
    printf("\nBusiness English :\t\t\t\t");
    scanf("%f",&s.m4);

    s.total = ((float)((s.m1)+(s.m2)+(s.m3)+(s.m4)));
    printf("\n\nTotal Marks : %.1f%",s.total);
    s.avr= ((float)s.total)/4;
    printf("\t\t\t\tAverage marks = %.1f\n\n", s.avr);
    s.per = ((float)s.total/400*100);
    printf("\n\nTotal Percentage :  %.2f%%",&s.per);

    if (s.m1 >=40 && s.m2>=40 && s.m3 >= 40 && s.m4 >= 40){
    if(s.per>=80)
        printf("\t\t\tDivision : Distinction\n\n");
    else if(s.per>=70)
        printf("\t\t\tDivision : First\n\n");
    else if(s.per>=50)
        printf("\t\t\tDivision : Second\n\n");
    else if(s.per>=40)
        printf("\t\t\tDivision : third\n\n");
    else
        {printf("\t\t\tDivision : Fail\n\n");}
    }


    return 0;
}
