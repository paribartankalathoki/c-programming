#include <stdio.h>

int main ()
{
    float m1,m2,m3,m4,m5,m6,per,total;

    printf("Enter your marks in following subjects to get your percentage...\n");

    printf("Marks in Basic Computer Architecture :");
    scanf("%f",&m1);
    printf("Marks in C Programming Language :");
    scanf("%f",&m2);
    printf("Marks in Discrete Math :");
    scanf("%f",&m3);
    printf("Marks in Business English :");
    scanf("%f",&m4);
    printf("Marks in Math :");
    scanf("%f",&m5);
    printf("Marks in Internet Fundamental & Applications :");
    scanf("%f",&m6);

    total= ((float)(m1+m2+m3+m4+m5+m6));
    per = ((float)(m1+m2+m3+m4+m5+m6)/600*100);

    if(per>=80)
    {

        printf("Your total mark is : %.2f%\n",total);
        printf("Your total percentage is :  %.2f%%\n",per);
        printf("Congratulations!! You got distinction.\n");
    }
    else if(per>=60)
    {
        printf("Your total mark is : %.2f%\n",total);
        printf("Your total percentage is :  %.2f%%\n",per);
        printf("Congratulations!! You have passed in First Division.\n");
    }
    else if(per>=50)
    {
        printf("Your total mark is : %.2f%\n",total);
        printf("Your total percentage is :  %.2f%%\n",per);
        printf("Congratulations!! You have passed in Second Division.\n");
    }
    else if(per>=40)
    {
        printf("Your total mark is : %.2f%\n",total);
        printf("Your total percentage is :  %.2f%%\n",per);
        printf("Congratulations!! You have passed.\n");
    }
    else
    {
        printf("Your total mark is : %.2f%\n",total);
        printf("Your total percentage is :  %.2f%%\n",per);
        printf("Sorry!! You have Failed. Please TRY again.\n");
    }
    return 0;

}
