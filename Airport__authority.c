#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,t,x=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0; i<n; i++)
    {
        if(arr[i]<=t)
        {
            x++;
        }
        else
        {
            x=x+2;
        }
    }
    printf("%d",x);
}