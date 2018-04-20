#include<stdio.h>
int main()
{
  int num;
  printf("\n Enter a number:\t");
  scanf("%d",&num);
  if(num%7==0)
  {
      printf("\n%d is divisible by 7",num);
  }
  else
  {
      printf("\n%d is not divisible by 7",num);
  }
  return 0;
}
