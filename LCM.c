#include<stdio.h>
int main()
{
    int i=1,a,b;
    scanf("%d%d",&a,&b);
    while(a*i%b!=0)
    {
        i++;
    }
    printf("%d",a*i);
    return 0;
}