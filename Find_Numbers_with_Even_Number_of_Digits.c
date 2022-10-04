#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,m,c,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        c=(int)log10(arr[i])+1;
        if(c%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
}