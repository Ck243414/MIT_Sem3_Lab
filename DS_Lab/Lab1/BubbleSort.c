#include<stdio.h>
int main4()
{
    int arr[100],arrlen,i,j,pos=0;
   printf("enter size\n");
   scanf("%d",&arrlen);
   printf("enter elements of the array:");
   for(i=0;i<arrlen;i++)
   {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<arrlen-1;i++)
    {

         for(j=0;j<arrlen-i-1;j++)
         {

               if(arr[j]>arr[j+1])
               {

                    pos = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = pos;
                }
         }
    }
    for(j=0;j<arrlen;j++)
    {

          printf("%d\t",arr[j]);

    }
}
