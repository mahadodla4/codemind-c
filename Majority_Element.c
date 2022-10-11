#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,flag=0,j,c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        flag=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>(n/2))
        {
            flag=1;
            printf("%d",arr[i]);
            arr[i]=0;
        }
    }
}