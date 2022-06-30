#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<(n-2); i++)
    {
        if(arr[i]%2==0 && arr[i+2]%2!=0 || arr[i+2]%2==0 && arr[i]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}