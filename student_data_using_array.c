#include <stdio.h>

int main()
{
    int i,j;
    struct student
{
        char nam[20], gender[6];
        int roll;
        float per,m1,m2,m3,m4,m5,m6,total,average;

}s[10];
       for(i=0; i<=9; i++)
       {
        printf("Enter your following information to get marksheets:\n");
        printf("Enter your name: \t");
        fflush(stdin);
        scanf("%[^\n]s",s[i].nam);
        fflush(stdin);
        printf("Enter your gender:\t");
        scanf("%s",s[i].gender);
        printf("Enter the roll no:\t");
        scanf("%d",&s[i].roll);

        printf("\nBasic Computer Architecture :\t\t\t");
        scanf("%f",&s[i].m1);
        printf("\nC Programming Language :\t\t\t");
        scanf("%f",&s[i].m2);
        printf("\nDiscrete Mathematics :\t\t\t\t");
        scanf("%f",&s[i].m3);
        printf("\nBusiness English :\t\t\t\t");
        scanf("%f",&s[i].m4);
        printf("\nMathematics :\t\t\t\t\t");
        scanf("%f",&s[i].m5);
        printf("\nInternet Fundamental & Applications :\t\t");
        scanf("%f",&s[i].m6);

       }
       for(j=0; j<=9; j++)
        {
            printf("\n\n\n\t\t\tYour Mark Sheet As Follows :\n\n");
            printf("Name: %s",s[j].nam);
            printf("\t\tRoll number: %d",s[j].roll);
            printf("\t\tGender: %s",s[j].gender);

            printf("\n------------------------------------------------------------------------------\n");

            printf("\nBasic Computer Architecture :\t\t\t %.2f\n",s[j].m1);

            printf("\nC Programming Language :\t\t\t %.2f\n",s[j].m2);

            printf("\nDiscrete Mathematics :\t\t\t\t %.2f\n",s[j].m3);

            printf("\nBusiness English :\t\t\t\t %.2f\n",s[j].m4);

            printf("\nMathematics :\t\t\t\t\t %.2f\n",s[j].m5);

            printf("\nInternet Fundamental & Applications :\t\t %.2f\n",s[j].m6);

             printf("\n------------------------------------------------------------------------------\n");


/*            total = ((float)((s[i].m1)+(s[i].m2)+(s[i].m3)+(s[i].m4)+(s[i].m5)+(s[i].m6)));

           printf("Total Marks : %.2f%",total);

            s.average= ((float)s[i].total)/6;
            printf("\t\t\t\tAverage marks = %.2f\n\n", s.average);

            s.per = ((float)s.total/600*100);
            printf("Total Percentage :  %.2f%%",&s.per);

            if(s.per>=40)
                printf("\t\t\tStatus : Pass\n\n");
            else
                printf("\t\t\tStatus : Fail\n\n");

*/



        }


return 0;

}
