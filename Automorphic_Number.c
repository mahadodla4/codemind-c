#include<stdio.h>
int main()
{
    int n,s,flag=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        if(n%10!=s%10)
        {
           flag=1;  
           break;
        }
        n=n/10;
        s=s/10;
    }
    if(flag==0)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}


