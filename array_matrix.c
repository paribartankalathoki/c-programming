#include<stdio.h>
int main()
{
	char nam[5][20];
	int i,j;
	printf("enter 5 strings of length not more than 20 each\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",nam[i]);
	}
	printf("\n\nYOU ENTERED\n");

	for(j=0;j<5;j++)
	{
		printf("%s\n",nam[j]);
	}
	return 0;
}
