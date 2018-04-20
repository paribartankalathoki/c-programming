#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int greatest,smallest;
    printf("Enter ten values:");
    //Store 10 numbers in an array
    for (i = 0; i < 10; i++) {
    	scanf("%d", &a[i]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (i = 0; i < 10; i++) {
	if (a[i] > greatest) {
	greatest = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    smallest = a[0];
    for (i = 0; i < 10; i++) {
	if (a[i] < smallest) {
	smallest = a[i];
    }
    }
    printf("\n\nsmallest of ten numbers is %d",smallest);
    return 0;
  }
