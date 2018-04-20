#include<stdio.h>
void border();
int main()
{
    border();
    printf("\nTEXAS INTERNATIONAL COLLEGE");
    border();
    printf("\nMITRAPARK, KATHMANDU");
    border();
    return 0;

}

void border()
{
    int i;
    printf("\n");
    for (i=1; i<=50; i++)
        printf("*");
    printf("\n");
    return 0;
}

