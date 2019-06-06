#include<stdio.h>
int main()
{
   char name[100];
   printf("Enter your name: ");
   scanf("%[^\n]s",name);
   printf("User Name : %s",name);
   return 0;
}
