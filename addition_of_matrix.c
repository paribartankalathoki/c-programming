/* #include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the First matrix->");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("\nEnter the Second matrix->");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("\nThe First matrix is\n");
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
    }
    printf("\nThe Second matrix is\n");
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",b[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("\nThe Addition of two matrix is\n");
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",c[i][j]);
    }
    return 0;
}
 */

 #include<stdio.h>
int main()
{
        int a[2][2],b[2][2],c[2][2],i,j;
        printf("Enter the value of First 2 x 2 Matrix : ");
        for(i=0;i<2;i++)
            {
                 for(j=0;j<2;j++)
                     {
                         scanf("%d",&a[i][j]);
                      }
            }
                 printf("Enter the value of Second 2 x 2 Matrix : ");
                 for(i=0;i<2;i++)
                     {
                        for(j=0;j<2;j++)
                           {
                               scanf("%d",&b[i][j]);
                           }
                      }
                               for(i=0;i<2;i++)
                                   {
                                      for(j=0;j<2;j++)
                                         {
                                            c[i][j]=a[i][j]*b[i][j];
                                            printf("Sum of Two Matrix : %d\n",c[i][j]);
                                         }
                                   }
                                            return 0;
}

