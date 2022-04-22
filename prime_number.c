#include<stdio.h>
int prime(int count)
{
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}
int main()
{
    int i,n,count=0,res;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    res=prime(count);
    return res;
}