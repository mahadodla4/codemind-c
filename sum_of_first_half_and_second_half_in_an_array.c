#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0,sum1=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<(n/2); i++)
    {
        sum=sum+arr[i];
    }
    for(i=(n/2); i<n; i++)
    {
        sum1=sum1+arr[i];
    }
    printf("%d
%d",sum,sum1);
}