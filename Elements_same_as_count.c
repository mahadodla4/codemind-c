#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,count=0,flag=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }
        if(arr[i]==count)
        {
            flag=1;
            printf("%d ",arr[i]);
            arr[i]=-1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}