#include <stdio.h>

int main()
{
    int days;

    printf("Enter the number to get day's");
    scanf("%d", &days);

    if (days == 1)
        printf("Sunday");
    else if (days == 2)
            printf("Monday");
    else if (days == 3)
            printf("Tuesday");
    else if (days == 4)
            printf("Wednesday");
    else if (days == 5)
            printf("Thursday");
    else if (days == 6)
            printf("Friday");
    else if (days == 7)
            printf("Saturday");
    return 0;
}
