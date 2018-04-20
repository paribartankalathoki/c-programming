#include<stdio.h>

int main()
{
  int n,digit;

  printf("Enter the number:\t");
  scanf("%d",&n);

  while(n!=0)
  {
      digit = digit%10;
      digit = digit + n%10;
      n=n/10;
  }
  printf("The sum is: \t%d",digit);
    return 0;
}
