#include<stdio.h>
int main()
{
    int a,b,i=1;
    scanf("%d%d",&a,&b);
    while(a*i%b!=0)
    {
        i++;
    }
    printf("%d",a*i);
    
}