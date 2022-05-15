#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c>1)
        return 0;
    }
    return 1;
}
int main()
{
    int s1,s2;
    scanf("%d%d",&s1,&s2);
    int add;
    add=s1+s2;
    int i,x;
    for(i=1;;i++)
    {
        x=add+i;
        if(prime(x)==1)
        {
            printf("%d",i);
            break ;
        }
        x=0;
    }
    
    
    return 0;
}