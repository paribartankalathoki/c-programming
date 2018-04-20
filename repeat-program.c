#include<stdio.h>

	int main()
	{
     		int counter, howmuch;
     		scanf("%d", &howmuch);
     		counter = 0;
     		do
     		{
          		counter++;
          		printf("%d\n", counter);
     		}
     		while ( counter < howmuch);
     		return 0;
	}
