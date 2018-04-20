#include <stdio.h>

int main()
{
    int num1,num2;
    int sum,sub,mult,mod;
    float div;
    char ch;

    do{
        printf("Enter any two numbers:\t");
        scanf("%d%d", &num1,&num2);

        sum = num1 + num2;
        sub = num1 - num2;
        mult = num1 * num2;
        div = (float)num1 / num2;
        mod = num1 % num2;

        printf("\nSUM = %d",sum);
        printf("\nDIFFERENCE = %d",sub);
        printf("\nPRODUCT = %d",mult);
        printf("\nQUOTIENT= %d",div);
        printf("\nREMINDER= %d",mod);
        printf("\nDo you want operate again?[y/n]...");
        fflush(stdin);
        scanf("%c", &ch);
    }while((ch == 'y')|| (ch == 'Y'));

    return 0;
}
