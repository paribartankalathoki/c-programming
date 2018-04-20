#include <stdio.h>
#include <math.h>
#define pi 3.1415

int fun(float r, float *a, float *c)
{
     *a = pi*pow(r,2);
     *c = 2*pi*r;
}
int main()
{
    float r,a,c;

    printf("enter radius:\t");
    scanf("%f",&r);

    fun(r,&a,&c);
    printf("\nthe area is = \t%f",a);

    printf("\nthe circumfrance is = \t%f",c);

    return 0;
}
