#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,x,c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0; i<n; i++)
    {
        if(x==arr[i])
        {
            printf("%d",i);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    
}