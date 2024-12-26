#include<stdio.h>
void main5()
{
    int arrlen,temp,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&arrlen);
    int arr[arrlen];
    printf("Enter the elements for sorting\n");      //selection sort
    for(int i=0;i<arrlen;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<arrlen;i++)
    {
        for(j=i;j<arrlen;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("The sorted elements in ascending order are: ");
    for(int i=0;i<arrlen-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[arrlen-1]);

}
