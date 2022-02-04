#include<stdio.h>
int main()
{
    int i,n,r,a,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        pro=pro*r;
        a=pro-sum;
    }
    printf("%d",a);
    return 0;
}