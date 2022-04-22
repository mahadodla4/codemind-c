#include<stdio.h>
#include<math.h>
int main()
{
    int n,ld=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
    if(ld<r)
    {
        ld=r;
    }
    n=n/10;
    }
    printf("%d",ld);
    
}