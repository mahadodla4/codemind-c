#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,d;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
      arr[i]=arr[n-1];
     for(i=0; i<n; i++)
     {
         if(arr[i]%2!=0)
         {
             d=arr[i];
         }
     }
     printf("%d",d);
}