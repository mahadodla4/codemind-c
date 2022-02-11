#include<stdio.h>
int sum(int n)
{
    int sum=0,r;
    while(n)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++)
    {
        if(i==sum(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}