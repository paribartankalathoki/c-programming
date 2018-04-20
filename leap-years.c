#include <stdio.h>
int main()
{   int year;
    char ch;
    do{
        printf("Enter your number to check if it is a leap year or not! :  ");
        scanf("%d",&year);
        if(year % 400 == 0)
       {
        printf("yes %d is leap year\n",year);
       }
    else if  (year % 100 == 0)
        {
            printf("yes %d is not leap year\n",year);
        }
    else if (year % 4 == 0)
        {
            printf("yes %d is leap year\n",year);
        }
    else
        {
            printf("%d is not a leap year",year);
        }
        printf("\nDo you want to continue again? [y/n]\n");
        fflush(stdin);
        scanf("%c", &ch);
    }while((ch=='y') || (ch == 'Y'));
    return 0;
}
