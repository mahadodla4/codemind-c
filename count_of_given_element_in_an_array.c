#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n],i,k,count=0;
   for(i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
   scanf("%d",&k);
   for(i=0; i<n; i++)
   {
       if(arr[i]==k)
       {
           count++;
       }
   }
   printf("%d",count);
   
}