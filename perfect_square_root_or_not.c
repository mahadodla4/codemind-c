#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,a;
    scanf("%d",&n);
    s=sqrt(n);
    a=s*s;
    if(n==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}