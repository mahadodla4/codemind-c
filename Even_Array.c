#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
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
    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}