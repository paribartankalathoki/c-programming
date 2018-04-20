#include <stdio.h>

int fun(float l,float b,float *a,float *p)
{
    *a=l*b;
    *p=2*(l+b);

}

int main()
{
    float l,b,a,p;
    printf("enter the length and breath:\t");
    scanf("%f%f",&l,&b);

    fun(l,b,&a,&p);
    printf("\n\nArea is = %f",a);
    printf("\n\nPerimeter is = %f",p);

    return 0;
}
