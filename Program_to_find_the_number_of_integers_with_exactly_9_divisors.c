#include<stdio.h>
int div(int x)
{
    int m,c=0;
    for(m=1; m<=x; m++)
    {
        if(x%m==0)
        c++;
    }
    return c;
}
int main()
{
    int a,i,t=0,c;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        if(div(i)==9)
        {
            printf("%d ",i);
            t++;
        }
    }
    printf("
Total=%d",t);
}