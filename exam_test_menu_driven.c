#include <stdio.h>
#include <string.h>

struct record
    {
        char str[20];
		int length;
    }s;

void enter_str(struct record s)
{
    strrev(s.str);
    printf("\nReverse of the string is: \t%s\n",s.str);
}
void str_length(struct record s)
{
    s.length=strlen(s.str);
    printf("\n The length of the string is:\t%d\n",s.length);
}
void add_str(struct record s)
{   char str_add[]="Pre";
    strcat(str_add,s.str);
    puts(str_add);
}

int main()
{
    int choice;
		do{
            printf("\nEnter the string:\t");
            scanf("%s",s.str);
            printf("\nWhat do you want to do?\n");
            printf("\n1.Reverse string\n2.String Length\n3.Add Pre as string\n4.Exit\n");
            printf("\nEnter the choice:\t");
            scanf("%d",&choice);
		switch(choice)
		{
        case 1:
            enter_str(s);
            break;
        case 2:
            str_length(s);
            break;
        case 3:
            add_str(s);
        }

            }while(choice<4);

    return 0;
}
