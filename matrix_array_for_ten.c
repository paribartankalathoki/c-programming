#include<stdio.h>

int main()
{
    struct student
    {
        int roll;
        float per;
        char nam[15];
    }s[2];
    int i,j;

    for(i=0; i<=1; i++)
        {
            printf("Enter roll no: \t\t\t");
            scanf("%d",&s[i].roll);
            printf("Enter percentage: \t\t");
            scanf("%f",&s[i].per);
            printf("Enter name: \t\t\t");
            fflush(stdin);
            scanf("%[^\n]s",s[i].nam);
            fflush(stdin);
        }
        for(j=0; j<=1; j++)
            {
                     printf("roll no: %d\n",s[j].roll);
                     printf("percentage: %.2f%%\n",s[j].per);
                     printf(" name: %s\n",s[j].nam);
            }
    return 0;
}
