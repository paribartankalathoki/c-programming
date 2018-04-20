#include <stdio.h>
void main(){
    int a=5;
    int b=10;
    int c=15;

    if(a > b && b > c)
        printf("%d is the greatest number", a);
    else
        printf("%d is the smallest number", a);
}
