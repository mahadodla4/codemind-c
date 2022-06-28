#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0,b;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
}