#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a,b,min=99;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0; i<n; i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            continue;
        }
        else
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
    }
    if(min==99)
    {
        printf("-1");
    }
    else
    {
       printf("%d",min);
    }
}