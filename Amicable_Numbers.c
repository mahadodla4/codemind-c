#include<stdio.h>
int main()
{
    int a,b,i;
    int sum=0,s=0;
    scanf("%d%d",&a,&b);
    for(i=1; i<a; i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1; i<b; i++)
    {
        if(b%i==0)
        {
            s=s+i;
        }
    }
    if(sum==b && s==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}