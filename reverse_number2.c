#include<stdio.h>

int main()
{
  int n,reverse=0;

  printf("Enter the number:\t");
  scanf("%d",&n);

  while(n!=0)
  {
      reverse = reverse*10;
      reverse = reverse + n%10;
      n=n/10;
  }
  printf("The reverse number of that you entered number is: \t%d",reverse);
    return 0;
}
