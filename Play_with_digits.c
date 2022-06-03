#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,r;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i])
        {
            r=arr[i]%10;
            sum=sum+r;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",sum);
}