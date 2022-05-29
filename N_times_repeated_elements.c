#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,count=0,k,temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
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
        if(count==k)
        {
            temp=1;
            printf("%d ",arr[i]);
            arr[i]=-1;
        }
    }
    if(temp==0)
    {
        printf("-1");
    }
}