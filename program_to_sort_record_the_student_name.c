#include <stdio.h>
#include<string.h>

    struct person{
        char nam[20],temp;
        int EID;
    }record[10];

    int main()
    {
        int i,j,n;
            printf("How many number do you want?\t");
            scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            printf("\nEnter the Name: \t");
            scanf("%s",record[i].nam);
            printf("\nenter the Employ ID : \t");
            scanf("%d",&record[i].EID);
        }

        struct person temp;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1; j++)
            {
                if(strcmp(record[j].nam,record[j+1].nam)>0)
                {
                    temp=record[j];
                    record[j]=record[j+1];
                    record[j+1]=temp;
                }
            }
        }
        printf("\nThe sort record according to name as follows:-");
        for(i=0;i<n;i++)
        {
            printf("\nName: \t\t\%s\n",record[i].nam);
                printf("\nEmploy ID: \t%d\n",record[i].EID);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1; j++)
            {
                if(record[j].EID>record[j+1].EID)
                {
                    temp=record[j];
                    record[j]=record[j+1];
                    record[j+1]=temp;
                }
            }
        }
        printf("\nThe sort record according to Employ ID as follows:-");
        for(i=0;i<n;i++)
        {
            printf("\nName: \t\t\%s\n",record[i].nam);
            printf("\nEmploy ID: \t%d\n",record[i].EID);
        }
        return 0;
    }

