#include<stdio.h>

int main()
{
    int a=13, b=13, c=23;

    printf("\n %d == %d = %d",a,b,a == b);
    printf("\n %d == %d = %d",a,c,a == c);

    printf("\n %d > %d = %d",a,b,a > b);
    printf("\n %d < %d = %d",a,c,a < c);

    printf("\n %d != %d = %d",a,b,a != b);
    printf("\n %d != %d = %d",a,c,a != c);

    printf("\n %d >= %d = %d",a,b,a >= b);
    printf("\n %d >= %d = %d",a,c,a >= c);

    printf("\n %d <= %d = %d",a,b,a <= b);
    printf("\n %d <= %d = %d",a,c,a <= c);

    return 0;
}
