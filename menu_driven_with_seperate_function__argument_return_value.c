#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int pro(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
int rem(int a, int b)
{
    return a%b;
}
int main()
{
 int a,b,ch;
 do{
    printf("\t\t****Today's Menus****\n");

    printf("\n\t\t 1. ADD\n\n\t\t 2. SUBSTRACT\n\n\t\t 3. PRODUCT\n\n\t\t 4. QUOTIENT\n\n\t\t 5. REMAINDER\n\n\t\t 6. Exit\n\n");

    printf("\n Enter your choice:\t");
    scanf("%d",&ch);

    switch(ch){
    case 1:
        printf("\n Enter any two number:\t");
        scanf("%d%d",&a,&b);
        printf("\n The sum of %d and %d is :\t%d\n\n",a,b,sum(a,b));
        break;
    case 2:
        printf("\n Enter any two number:\t");
        scanf("%d%d",&a,&b);
        printf("\n The difference of %d and %d is :\t%d\n\n",a,b,sub(a,b));
        break;
    case 3:
        printf("\n Enter any two number:\t");
        scanf("%d%d",&a,&b);
        printf("\n The product of %d and %d is :\t%d\n\n",a,b,pro(a,b));
        break;
    case 4:
        printf("\n Enter any two number:\t");
        scanf("%d%d",&a,&b);
        printf("\n The quotient of %d and %d is :\t%d\n\n",a,b,div(a,b));
        break;
    case 5:
        printf("\n Enter any two number:\t");
        scanf("%d%d",&a,&b);
        printf("\n The remainder of %d and %d is :\t%d\n\n",a,b,rem(a,b));
        break;
    default:
        printf("Invalid Number");
    }
 }while(ch!=6);

    return 0;
}
