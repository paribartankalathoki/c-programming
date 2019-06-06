#include <stdio.h>

int main(void)
{
  int answer, i;
  int right, wrong;

  right = 0;
  wrong = 0;

  for( i = 1; i < 11; i = i + 1) {
    printf("What is %d + %d? ", i, i);
    scanf("   %d",   &answer);

    if(answer == i + i) {
      printf("Right! \n ");
      right++;
    }
    else {
      printf("Sorry, you're wrong. ");
      printf("The answer is %d. \n ", i + i);
      wrong++;
    }
  }
  printf("You got %d right and %d wrong.", right, wrong);

  return 0;
}
