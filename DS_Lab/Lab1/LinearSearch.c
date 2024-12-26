#include<stdio.h>
int main2()
{
    int arr[7],i;
    printf("Enter any 7 numbers in the array");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf("enter the number to be searched");
    scanf("%d",&num);
    int flag;
    for(i=0;i<7;i++)
    {
        if(num==arr[i])
        {
            flag=i+1;
        }
    }
    printf("The required number is found at %d position",flag);
    return 0;
}
