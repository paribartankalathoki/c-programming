#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    c=a+b;
    printf("The sum of %d and %d is the %d\n",a,b,c);

    c=a-b;
    printf("The subtraction of %d and %d is the %d\n",a,b,c);

    c=a*b;
    printf("The multiplication of %d and %d is the %d\n",a,b,c);

    c=a/b;
    printf("The quotient when %d is divided by %d is the %d\n",a,b,c);

    c=a%b;
    printf("The reminder when divided %d by %d is the %d\n",a,b,c);

    return 0;

}
