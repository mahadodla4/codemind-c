#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,sum=0,r,i;
    x=n;
    while(x>0)
    {
        r=x%10;
        x=x/10;
        int fact=1;
        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==n)
    {
       printf("The number %d is a strong number",n);
    }
    else
    {
       printf("The number %d is not a strong number",n);
    }
}
