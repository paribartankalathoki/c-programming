#include <stdio.h>

int main()
{
    int a,b;
    char ch;

   do{
        printf("Enter your first number: \n\t");
        scanf("%d", &a);
        printf("Enter your second number: \n\t");
        scanf("%d", &b);
        printf("The sum of the %d and %d is %d.",a,b,a+b);
        printf("\nDo you want to continue again? [y/n]\n");
        fflush(stdin);
        scanf("%c", &ch);
    }while((ch == 'y') || (ch == 'Y'));
        return 0;
}
