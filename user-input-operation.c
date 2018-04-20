#include <stdio.h>

int main()
{
    char ch;
    int a,b;
    do{
        printf("Enter your first number: ");
        scanf("%d",&a);
        printf("Enter your second number: ");
        scanf("%d",&b);
        printf("What do you want to do? Press m for multiply,a for sum,d for divide and s for subtraction.");
        fflush(stdin);
        scanf("%c", &ch);

        if(ch == 'm'){
            printf("The product of %d and %d is %d",a,b,a*b);
        }
        else if(ch == 'd'){
            printf("The quotient when %d is divided  by %d is %d",a,b,a/b);
        }
        else if(ch == 'a'){
            printf("The sum of %d and %d is %d",a,b,a+b);
        }
        else {
            printf("The difference between %d and %d is %d",a,b,a-b);
        }
            printf("\n Do you want start again?[y/n]...");
            fflush(stdin);
            scanf("%c", &ch);

    }while((ch == 'm') || (ch == 'd') || (ch == 'a') || (ch == 's') || (ch == 'y')|| (ch == 'Y'));

    return 0;
}
