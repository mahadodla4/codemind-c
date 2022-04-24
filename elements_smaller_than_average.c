#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0,count=0;
    float avg;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0; i<n; i++)
    {
        if(arr[i]<=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}