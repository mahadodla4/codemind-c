#include<stdio.h>
main()
{
    int i=1,n,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}