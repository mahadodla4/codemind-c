#include<stdio.h>
#include<math.h>
int prime(int n);

int main()
{
    int n,arr[50],i,sum=0,count=0;
    float p_avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
         
     }
     for(i=0;i<n;i++)
     {
         if(prime(arr[i]))
           {
               sum=sum+arr[i];
               count++;
           }
     }
     printf("%.2f",(float)sum/count);
    
     return 0;
}
int prime(int p)
{
    int i;
    if(p==1)
      return 0;
    for(i=2;i<=sqrt(p);i++)
       if(p%i==0)
         return 0;
     
       return 1;
}