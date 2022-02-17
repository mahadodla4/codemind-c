#include<stdio.h>
int main()
{
    int i,n,r,s,v,re,su=0,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    v=sum*sum;
    while(v!=0)
    {
        re=v%10;
        su=su*10+re;
        v=v/10;
    }
    if(s==su)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}