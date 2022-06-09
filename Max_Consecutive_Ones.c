#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c=0,max;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
        if(arr[i]==0)
        {
            if(max<c)
            {
                max=c;
            }
            c=0;
        }
    }
    if(max<c)
    {
        max=c;
    }
    printf("%d",max);
}