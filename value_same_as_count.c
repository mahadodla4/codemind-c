#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,count=0,c=0;
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
                count++;
            }
        }
        if(arr[i]==count)
        {
            c++;
            arr[i]=-1;
        }
    }
    printf("%d ",c);
}