#include<stdio.h>
int main()
{
    int n,r,sum=0,pro=1,s;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}