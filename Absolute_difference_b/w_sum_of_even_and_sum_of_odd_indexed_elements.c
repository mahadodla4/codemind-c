#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,es=0,os=0,b;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            es=es+arr[i];
        }
        if(i%2!=0)
        {
            os=os+arr[i];
        }
    }
    b=es-os;
    printf("%d",b);
    
}