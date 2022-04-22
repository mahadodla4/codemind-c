#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,r,sum=0,a;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
     if(a%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}