#include <stdio.h>
#include <stdlib.h>

int main1()
{
    char a[50],b[50],c[100];
    int i,j,f=0,p,n,m,s;
    printf("Enter the first string");
    scanf("%s",a);
    printf("Enter the second string");
    scanf("%s",b);
    printf("Enter the respective number for operations\n");
    printf("1 - Length of string\n");
    printf("2 - String concatenation\n");
    printf("3 - String comparison\n");
    printf("4 - Insert a substring\n");
    printf("5 - Delete a substring\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            {
                printf("To find the length of the previously entered strings\n");
                for (i=0; a[i]!='\0'; i++);
                n=i;
                for (j=0;b[j]!='\0'; j++);
                m=j;
                printf ("Length of string 1 and 2 are %d and %d respectively\n",i,j);
                break;
           }
        case 2:
            {
                printf("To concatenate the previously entered strings\n");
                for (i=0; a[i]!='\0'; i++);
                n=i;
                for (j=0;b[j]!='\0';j++,i++)
                    {
                        a[i]=b[j];
                    }
                    b[i]='\0';
                    printf("The concatenated string is %s\n", a);
                    break;
            }
        case 3:
            {
                printf("To compare the previously entered strings\n");
                for (i=0;(c[i]!='\0')||(b[i]!='\0');i++)
                    {
                        if (a[i]!=b[i])
                        {
                            f=1;
                            break;
                        }
                    }
                    if (f)
                        {
                            printf("The strings are not equal\n");
                        }
                    else printf("The strings are equal\n");
                break;
                }
        case 4:
            {
                printf("To insert a substring\n");
                for (i=0; a[i]!='\0'; i++);
                n=i;
                char d[50];
                printf("Enter the substring to be inserted\n");
                scanf("%s",d);
                printf("From which position do you want to insert entered substring to string 1?: ");
                scanf("%d",&p);
                int o;
                for (i=0; d[i]!='\0'; i++);
                o=i;
                for (i=n+o;i+o!=p-1;i--)
                    {
                        c[i]=c[i-o];
                    }
                printf("%s",c);
                break;
            }
         ///case 5:
            {
                ///printf("To delete a substring");

            }

    }
    return 0;
}
