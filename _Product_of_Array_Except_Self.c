#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        int pro=1;
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                pro=pro*arr[j];
            }
        }
        printf("%d ",pro);
    }
}