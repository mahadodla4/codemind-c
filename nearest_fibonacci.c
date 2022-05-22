#include<stdio.h>
int main()
{
    int n,c,a=1,b=1,f1,f2;
    scanf("%d",&n);
    c=1;
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n-a<c-n)
    {
    	  printf("%d",a);
    }
    else if(n-a==c-n)
    {
    	  printf("%d %d",a,c);
    }
    else
    {
    	   printf("%d",c);
    }
    
}