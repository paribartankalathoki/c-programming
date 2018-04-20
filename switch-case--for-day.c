#include <stdio.h>

void main()
{
    int days;
    char ch;
    do{
    printf("Enter your number to know what day is today?");
    scanf("%d",&days);
    switch(days)
    {

        case 1:
        printf("Today is Sunday");
        break;

        case 2:
        printf("Today is Monday");
        break;

        case 3:
        printf("Today is Tuesday");
        break;

        case 4:
        printf("Today is Wednesday");
        break;

        case 5:
        printf("Today is Thursday");
        break;

        case 6:
        printf("Today is Friday");
        break;

        case 7:
        printf("Today is Saturday");
        break;

        default:
            printf("The number you enter is invalid please enter number between 1 to 7.");
    }
        printf("\nDo you want to continue? Press y for yes and n for no.");
        fflush(stdin);
        scanf("%c", &ch);
    }while((ch == 'y') || (ch == 'Y'));
}

