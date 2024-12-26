#include<stdio.h>
int main3()
{

    int arr[10],n,ele;
    printf("size:");
    scanf("%d",&n);

    int s=0,e=n-1,mid;

    printf("enter sorted arr:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Element:");
    scanf("%d",&ele);

    while(s<=e)
    {
        mid=(s+e)/2;

        if(arr[mid]== ele)
        {
            printf("Found at index position %d",mid);
            return 0;
        }
        else if(arr[mid]>ele)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

    }
    printf("not found");
    return 0;

}
