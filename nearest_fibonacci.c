#include<stdio.h>
int main()
{
    int a=1,b=1,c,n;
    scanf("%d",&n);
    c=1;
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n-a<c-n)
    {
        printf("%d",a);
    }
    else if(n-a==c-n)
    {
        printf("%d %d",a,c);
    }
    else
    {
        printf("%d",c);
    }
}
