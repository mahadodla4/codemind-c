#include<stdio.h>
int main()
{
    int i,r,n,ec=0,oc=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
        n=n/10;
    }
    if(oc==0)
    {
        printf("Even");
    }
    else if(ec==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}