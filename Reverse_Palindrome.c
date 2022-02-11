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
    int a;
    scanf("%d",&a);
    do
    {
        a=a+sum(a);
    }
    while(a!=sum(a));
    {
        printf("%d",a);
    }
    return 0;
}