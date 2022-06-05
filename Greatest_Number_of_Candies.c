#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],max,i,m,ec;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0; i<n; i++)
    {
        ec=arr[i]+m;
        if(ec>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}