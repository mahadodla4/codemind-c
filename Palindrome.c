#include<stdio.h>
int main()
{
    int a,n,r,sum=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(a==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}