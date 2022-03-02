#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0,count1=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else if(arr[i]%2!=0)
        {
            count1++;
        }
    }
    printf("%d ",count);
    printf("%d",count1);
    return 0;
}