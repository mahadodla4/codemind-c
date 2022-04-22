#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,i,c;
    scanf("%d",&n);
    c=a+b;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}