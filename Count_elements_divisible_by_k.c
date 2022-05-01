#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],i,count=0;
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<a; i++)
    {
        if(arr[i]%b==0)
        {
            count++;
        }
    }
    printf("%d",count);
}