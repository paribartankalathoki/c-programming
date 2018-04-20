#include <stdio.h>
#include <stdlib.h>
 void  main()
 {
     int a,b,c;
     printf("\n Enter your first number");
     scanf("%d",&a);
     printf("\n Enter your second number");
     scanf("%d",&b);
     printf("\n Enter your third number");
     scanf("%d",&c);
        if(a>b && a>c)
        printf("%d is the greatest number",a);
     else if(a==b && a==c)
        printf("all are equal");
     else if(b>c)
        printf("\n %d is the greatest number",b);
     else
        printf("\n %d is the  greatest number",c);
 }
