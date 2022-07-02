#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,flag=0,a,b;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0; i<n; i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}