#include<stdio.h>
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{

    int arr[10],n,ele;
    printf("size:");
    scanf("%d",&n);



    printf("enter arr:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
